pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                // Pull Docker image
                script {
                    def dockerImage = docker.image('ubuntu:latest')
                    dockerImage.pull()
                }
            }
        }
        stage('Test') {
            steps {
                // Run Docker container
                script {
                    def dockerContainer = docker.image('ubuntu:latest').run()
                    // Example: Execute commands inside the Docker container
                    dockerContainer.inside {
                        sh 'echo "Hello from Docker container"'
                    }
                }
            }
        }
    }
}
