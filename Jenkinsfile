pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                script {
                    // Run the pwd command inside the container
                    docker.image('ubuntu:latest').inside {
                        sh 'pwd'
                  }
                }
            }
        }
    }
}
// Path: Dockerfile
