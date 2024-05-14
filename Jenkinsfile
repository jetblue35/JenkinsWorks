pipeline {
    agent any
    docker {
        image 'ubuntu:latest'
    }
    stages {
        stage('Test') {
            steps {
                script {
                    docker.inside {
                    sh 'ls -l'
                  }
                }
            }
        }
    }
}

