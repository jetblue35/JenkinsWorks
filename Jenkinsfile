pipeline {
    agent any
    environment {
        JAVA_HOME = "/usr/lib/jvm/java-17-openjdk-amd64"
        PATH = "${env.JAVA_HOME}/bin:/home/bursiyer/cppncss-1.0.3/bin:${env.PATH}"
    }
    stages {
        stage('Build') {
            steps {
                sh 'mkdir -p /var/lib/jenkins/workspace/pipeline1/reports'
                sh '''
                    cppncss -x -f=reports/cppncss_report.xml --recursive .
                '''
            }
        }
        stage('Publish Results') {
            steps {
                junit 'reports/cppncss_report.xml'
            }
        }
    }
}
