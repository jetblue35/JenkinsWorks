pipeline {
    agent any
    docker {
        image 'ubuntu:latest'
    }
    stages {
        stage('Test') {
            steps {
                docker.image('ubuntu:latest').inside {
                    sh 'ls -l'
                }
            }
        }
    }
}

