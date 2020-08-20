pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        stage('Test') {
            steps {
                sh './main'
            }
        }
        stage('Finish') {
            steps {
                sh 'echo its me'
            }
        }
    }
}

