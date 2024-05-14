pipeline {
    agent agent1
    stages {
        stage('Test') {
            steps {
                sh """
                  docker build -t ubuntu .
                """
            }
        }
    }
}
// Path: Dockerfile
