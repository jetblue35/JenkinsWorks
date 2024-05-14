pipeline {
    agent any
    stages {
        stage('Test') {
            steps {
                script {
                    // Run the pwd command inside the container
                    docker.image('my-jenkins-image').inside {
                        sh 'pwd'
                  }
                }
            }
        }
    }
}

