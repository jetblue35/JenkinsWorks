pipeline {
    agent Built-In-Node
    stages {
        stage('Test') {
            steps {
                script {
                    // Run the pwd command inside the container
                    docker.image('ubuntu:latest').inside {
                        sh 'uname -a'
                  }
                }
            }
        }
    }
}
// Path: Dockerfile
