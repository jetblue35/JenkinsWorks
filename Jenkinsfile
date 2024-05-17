pipeline {
    agent any 
    stages {
        stage('Clone the Repo:') { 
            steps {
                echo 'Cloning the repository:'  
                git 'https://github.com/jetblue35/JenkinsWorks.git'  // Kendi repo URL'nizi buraya ekleyin
            }
        }
        stage('Build') { 
            agent {
                docker {
                    image 'ubuntu:latest'  // Kendi Docker image'inizi buraya ekleyin
                    reuseNode true
                }
            }
            steps {
                echo "Building app using Docker Image"
                sh 'docker build -t ubuntu:latest .'  // Eğer docker build komutunu kullanıyorsanız ekleyin
            }
        }
        stage('Deploy the Application') { 
            steps {
                echo "Deploying the application"
                sh 'docker stop cont || true'  // Var olan konteyner varsa durdurun
                sh 'docker rm cont || true'  // Var olan konteyner varsa silin
                sh 'docker run -d --name ubuntu ubuntu:latest'  // Yeni konteyner başlatın
            }
        }
    }
}
