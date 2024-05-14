pipeline {
    agent any
    docker {
        image 'ubuntu:latest'
    }
    stages {
        stage('Test') {
            steps {
                docker.inside {
                    sh 'ls -l'
                }
            }
        }
    }
}

