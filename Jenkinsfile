pipeline {
    agent any
    environment {
        JAVA_HOME = "/usr/lib/jvm/java-17-openjdk-amd64"
        PATH = "${env.JAVA_HOME}/bin:/home/bursiyer/cppncss-1.0.3/bin:${env.PATH}"
    }
    stages {
        stage('Build') {
            steps {
                script {
                    // Create reports directory if not exists
                    sh 'mkdir -p reports'
                    // Run CppNCSS and generate report
                    sh 'cppncss -x -f=reports/cppncss_report.xml --recursive .'
                }
            }
        }
        stage('Publish CppNCSS Report') {
            steps {
                // Publish the CppNCSS report
                publishCppNCSS pattern: 'reports/cppncss_report.xml'
            }
        }
    }
    post {
        success {
            // Archive CppNCSS report as an artifact
            archiveArtifacts artifacts: 'reports/cppncss_report.xml', allowEmptyArchive: true
        }
    }
}
