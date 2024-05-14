pipeline {
    agent any
    dockerImage.run('ubuntu:latest')
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

