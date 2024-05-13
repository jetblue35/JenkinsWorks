pipeline {
  agent {
    docker { image 'welcome-to-docker' }
  }
  stages {
    stage('Test') {
      steps {
        sh 'node --version'
      }
    }
  }
}