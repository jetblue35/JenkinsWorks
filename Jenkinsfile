pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                script {
                    // Execute pipeline steps inside a Docker container
                    withDockerContainer('jenkins/jenkins:lts') {
                        sh 'ls'
                    }
                }
            }
        }
    }
}
