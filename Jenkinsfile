pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                docker.image('ubuntu:latest').inside {
                    sh 'echo "Hello World"'
                }
            }
        }
    }
}
