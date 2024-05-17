pipeline {
    agent any 
    stages {
        stage('Clone the Repo:') { 
            steps {
                echo 'Cloning the repository:'  
                git branch: 'main', url: 'https://github.com/jetblue35/JenkinsWorks.git'
            }
        }
        stage('Check Environment') {
            steps {
                sh 'echo $PATH'
                sh 'docker --version'
            }
        }
        stage('Build') { 
            agent {
                docker {
                    image 'docker:latest'  // Use the docker image that has Docker CLI installed
                    reuseNode true
                }
            }
            steps {
                echo "Building app using Docker Image"
                sh 'docker build -t my-app:latest .'  // Assuming you have a Dockerfile in your repository
            }
        }
        stage('Deploy the Application') { 
            steps {
                echo "Deploying the application"
                sh 'docker stop my-app || true'
                sh 'docker rm my-app || true'
                sh 'docker run -d --name my-app my-app:latest'
            }
        }
    }
}
