pipeline {
    agent {
        docker {
            image 'ubuntu:latest'
            user 'root' // Change 'root' to the desired user
        }
    }
    stages {
        stage('Test') {
            steps {
                script {
                    // Run commands inside the Docker container
                    sh 'whoami'
                }
            }
        }
    }
}
