pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                sh 'mkdir -p reports'
                sh 'cppncss -x reports/cppncss_report.xml --recursive .'
            }
        }
        
        stage('Publish Results') {
            steps {
                // Example assuming JUnit XML files are generated in 'test-reports' directory
                junit 'test-reports/**/*.xml'
            }
        }
        stage('Publish CppNCSS Report') {
            steps {
                // Publish the CppNCSS report
                publishCppNCSS pattern: 'reports/reports.xml'
            }
        }
    }
    
    post {
        always {
            archiveArtifacts artifacts: 'reports/cppncss_report.xml', allowEmptyArchive: true
        }
    }
}
