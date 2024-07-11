pipeline {
    agent any
    environment {
        PATH = "${env.PATH}:/home/bursiyer/cppncss-1.0.3/bin"
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
