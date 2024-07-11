pipeline {
    agent any
    environment {
        PATH = "${env.PATH}:/home/bursiyer/cppncss-1.0.3/bin"
        JAVA_HOME = "/usr/lib/jvm/java-17-openjdk-amd64"
        PATH = "${env.JAVA_HOME}/bin:${env.PATH}"
    }
    stages {
        stage('Build') {
            steps {
                sh 'cppncss --output=cppncss_report.xml --recursive .'
            }
        }
        stage('Publish Results') {
            steps {
                publishCppncssResults pattern: 'cppncss_report.xml'
            }
        }
    }
}
