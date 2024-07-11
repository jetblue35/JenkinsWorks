pipeline {
    agent any
    environment {
        JAVA_HOME = "/usr/lib/jvm/java-17-openjdk-amd64"
        PATH = "${env.JAVA_HOME}/bin:/home/bursiyer/cppncss-1.0.3/bin:${env.PATH}"
    }
    stages {
        stage('Build') {
            steps {
                sh 'mkdir -p reports'
                sh 'cppncss  -f=reports/cppncss_report.xml --recursive .'
            }
        }
        stage('Publish CppNCSS Report') {
            steps {
                // Publish the CppNCSS report
                publishCppNCSS pattern: 'reports/report.xml'
            }
        }
    }
    
    post {
        always {
            archiveArtifacts artifacts: 'reports/cppncss_report.xml', allowEmptyArchive: true
        }
    }
}
