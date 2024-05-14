pipeline {
    agent {
        docker {
            image 'ubuntu:latest'
            
        }
    }
    stages {
        stage('Test') {
            steps {
                script {
                    // Run commands inside the Docker container
                    sh 'ls -lah'
                }
            }
        }
    }
}
// Upps!
