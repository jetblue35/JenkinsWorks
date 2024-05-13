pipeline {
  agent {
    docker { image 'welcome-to-docker' }
  }
  stages {
    stage('Test') {
      steps {
        // Run the windows command
        bat 'echo "Hello, World!"'
      }
    }
  }
}