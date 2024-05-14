pipeline {
    agent any
    script {
        // Run the docker container
        docker.image('ubuntu:latest').inside {
            sh 'ls -l'
        }
    }
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

