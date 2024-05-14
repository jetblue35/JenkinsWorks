pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                script {
                    // Execute pipeline steps inside a Docker container
                    withDockerContainer('ubuntu:latest') {
                        sh 'whoami'
                    }
                }
            }
        }
    }
}
