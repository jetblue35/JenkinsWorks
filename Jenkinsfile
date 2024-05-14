pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                script {
                    // Run the pwd command inside the container
                    docker.image('my-jenkins-image:latest').inside {
                        sh 'pwd'
                  }
                }
            }
        }
    }
}
// Path: Dockerfile
