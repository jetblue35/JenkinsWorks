pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                script {
                    docker.image('ubuntu:latest').inside {
                        sh 'docker ps -q'
                    }
                }
            }
        }
    }
}

