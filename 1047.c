#include<stdio.h>

int main(){
	int h_ini, m_ini, h_fin,m_fin;
	
	scanf("%d %d %d %d",&h_ini, &m_ini,&h_fin,&m_fin);
	
	printf("%d h %d min",h_fin-h_ini,m_fin-m_ini);
	
	return 0;
}
