pipeline {
    agent any

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
