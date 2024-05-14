pipeline {
    agent {
        docker {
            image 'ubuntu:latest' // Use the latest Ubuntu image
            
        }
    }
    stages {
        stage('Test') {
            steps {
                withDockerContainer('ubuntu:latest') {
                    sh 'echo "Hello World"'
                }
            }
        }
    }
}
// Upps!
