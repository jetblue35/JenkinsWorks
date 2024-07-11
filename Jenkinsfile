pipeline {
    agent any
    environment {
        JAVA_HOME = "/usr/lib/jvm/java-17-openjdk-amd64"
        PATH = "${env.JAVA_HOME}/bin:/home/bursiyer/cppncss-1.0.3/bin:${env.PATH}"
    }
    stages {
        stage('Build') {
            steps {
                sh 'cppncss -x -f cppncss_report.xml --recursive .'
            }
        }
        stage('Publish Results') {
            steps {
                junit 'cppncss_report.xml'
            }
        }
    }
}
