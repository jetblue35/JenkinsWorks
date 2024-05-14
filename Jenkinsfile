pipeline {
    agent none
    stages {
        stage('Test') {
            steps {
                script {
                    // Run the pwd command inside the container
                    docker.image('ubuntu:latest').inside {
                        sh 'uname -a'
                        sh 'apt-get update'
                  }
                }
            }
        }
    }
}
// Path: Dockerfile
