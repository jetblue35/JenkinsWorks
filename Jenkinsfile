pipeline {
    agent any
    environment {
        JAVA_HOME = "/usr/lib/jvm/java-17-openjdk-amd64"
        PATH = "${env.JAVA_HOME}/bin:/home/bursiyer/cppncss-1.0.3/bin:${env.PATH}"
    }
    stages {
        stage('Build') {
            steps {
                sh 'mkdir -p /var/lib/jenkins/workspace/pipeline1/reports'
                sh '''
                    cppncss -v -k -r -n=30 . \
                    -DATL_NO_VTABLE \
                    -DXERCES_CPP_NAMESPACE_USE \
                    -DXERCES_CPP_NAMESPACE_BEGIN \
                    -DXERCES_CPP_NAMESPACE_END \
                    -DCDOM_EXPORT \
                    -DDEPRECATED_DOM_EXPORT \
                    -MDECLARE_NOT_AGGREGATABLE \
                    -MDECLARE_PROTECT_FINAL_CONSTRUCT \
                    -DXMLPARSER_EXPORT \
                    -DWINAPI \
                    -DSTDMETHODCALLTYPE \
                    -DXMLUTIL_EXPORT \
                    -MDECL_XSERIALIZABLE \
                    -MBEGIN_COM_MAP \
                    -MCOM_INTERFACE_ENTRY \
                    -MEND_COM_MAP \
                    -MDECLARE_WND_CLASS \
                    -DXERCES_CPP_NAMESPACE_QUALIFIER \
                    -MMESSAGE_HANDLER \
                    -MEND_MSG_MAP \
                    -MMakeXMLException \
                    -MBEGIN_CONNECTION_POINT_MAP \
                    -DSAX2_EXPORT \
                    -DSAX_EXPORT \
                    -DXerces_DLLVersionStr \
                    -DVALIDATORS_EXPORT \
                    -DPARSERS_EXPORT \
                    -DAPIENTRY \
                    -MTRY_CATCH_THROW \
                    -DU_CAPI \
                    -DU_EXPORT2 \
                    -MOBJECT_ENTRY \
                    -DCALLBACK \
                    -MIMPL_XSERIALIZABLE_TOCREATE \
                    -MIMPL_XSERIALIZABLE_NOCREATE \
                    -MBEGIN_OBJECT_MAP \
                    -MEND_OBJECT_MAP \
                    -DU_IMPORT \
                    -MCONNECTION_POINT_ENTRY \
                    -MEND_CONNECTION_POINT_MAP \
                    -MBEGIN_MSG_MAP \
                    -MSTDMETHOD="void STDMETHOD" \
                    -MCOM_INTERFACE_ENTRY_IMPL \
                    -MSTDMETHOD_="void _STDMETHOD" \
                    -MATLTRY \
                    -MTEST_THROW_ARG2 \
                    -MSORT_KEYSET_ONEKEY \
                    -M__volatile__ \
                    -D__asm__ \
                    -MREPORT_FACET_ERROR \
                    -MFROM_BASE_VALUE_SPACE \
                    -MREPORT_VALUE_ERROR \
                    -MTEST_THROW_ARG1 \
                    -MGET_NEXT_KEYSET \
                    -MSORT_KEYSET_TWOKEYS
                    -x reports/cppncss_report.xml
                '''
            }
        }
        stage('Publish Results') {
            steps {
                junit 'reports/cppncss_report.xml'
            }
        }
    }
}
