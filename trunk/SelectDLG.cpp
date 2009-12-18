// SelectDLG.cpp : implementation file
//

#include "stdafx.h"
#include "demo.h"
#include "SelectDLG.h"
#include "stdio.h"
#include "math.h"
#include "triangle.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SelectDLG dialog


SelectDLG::SelectDLG(CWnd* pParent /*=NULL*/)
	: CDialog(SelectDLG::IDD, pParent)
{
	//{{AFX_DATA_INIT(SelectDLG)
	m_2dpos = _T("");
	m_3dpos = _T("");
	m_texpos = _T("");
	m_tripos = _T("");
	//}}AFX_DATA_INIT
}


void SelectDLG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(SelectDLG)
	DDX_Text(pDX, IDC_2DPOS, m_2dpos);
	DDX_Text(pDX, IDC_3DPOS, m_3dpos);
	DDX_Text(pDX, IDC_TEXPOS, m_texpos);
	DDX_Text(pDX, IDC_TRIPOS, m_tripos);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(SelectDLG, CDialog)
	//{{AFX_MSG_MAP(SelectDLG)
	ON_BN_CLICKED(IDC_LOAD2D, OnLoad2d)
	ON_BN_CLICKED(IDC_LOAD3D, OnLoad3d)
	ON_BN_CLICKED(IDC_LOADTEX, OnLoadtex)
	ON_BN_CLICKED(IDC_LOADTRI, OnLoadtri)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SelectDLG message handlers

void SelectDLG::OnLoad2d() 
{
	// TODO: Add your control notification handler code here
	/*
	static char szFilter[]="TXT�ļ�(*.txt)|*.txt||";
		CFileDialog m_ldFile(TRUE,_T("txt"),_T("2Ddatafile"),OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,szFilter);
	 
	    if (m_ldFile.DoModal()==IDOK)
		{   
			m_2dpos=m_ldFile.GetPathName();
			UpdateData(FALSE);		
		//}
	
		//����txt�ļ�
		n2dpoint=0;
		for(int i=0;i<MAXPOINT;i++)
		{
			m_point2d[i][0]=0;
			m_point2d[i][1]=0;
			m_point2d_old[i][0]=0;
			m_point2d_old[i][1]=0;
		}
		FILE* p2dfile;
		if((p2dfile=fopen(m_2dpos,"r"))==NULL)
			MessageBox(_T("2D�����ļ��򿪴���!"),NULL,MB_ICONERROR|MB_SYSTEMMODAL);
		else
		{
			for(i=0;i<MAXPOINT;i++)
			{
				fscanf(p2dfile,"%f",&m_point2d[i][0]);
				fscanf(p2dfile,"%f",&m_point2d[i][1]);
				m_point2d_old[i][0]=m_point2d[i][0];
				m_point2d_old[i][1]=m_point2d[i][1];
				if((m_point2d[i][0]==0)&&(m_point2d[i][1]==0))
					break;
				n2dpoint++;
			}
			fclose(p2dfile);
			if(n2dpoint==MAXPOINT)
			{
				MessageBox(_T("���ݵ�������������������ʾ���������ܵ���ͼ����ʾ������!"),NULL,
				MB_ICONWARNING|MB_SYSTEMMODAL);
				return;
			}
	
			//�Զ���Ķ�ά��������ǻ�
			int kk=0;
			int &numberoftriangle=kk;		
			int* vertexindex=new int[MAXPOINT*10];
	
			triangulation(m_point2d,n2dpoint,vertexindex,numberoftriangle);
			ntri=numberoftriangle;
	
			triangle=new int*[ntri];
			for(i=0;i<ntri;i++)
			{
				triangle[i]=new int[3];
				for(int j=0;j<3;j++)
					triangle[i][j]=vertexindex[i*3+j];		
			}
			delete vertexindex;
		}
		}*/
	
}

void SelectDLG::OnLoad3d() 
{
	// TODO: Add your control notification handler code here
	/*
	static char szFilter[]="TXT�ļ�(*.txt)|*.txt||";
		CFileDialog m_ldFile(TRUE,_T("txt"),_T("3Ddatafile"),OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,szFilter);
	
		if (m_ldFile.DoModal()==IDOK)
		{
		 	m_3dpos=m_ldFile.GetPathName();
			UpdateData(FALSE);
		//}
	
		//����txt�ļ�
		n3dpoint=0;
		for(long i=0;i<MAXPOINT;i++)
		{
			m_point3d[i][0]=0;
			m_point3d[i][1]=0;
			m_point3d[i][2]=0;
			m_point3d_old[i][0]=0;
			m_point3d_old[i][1]=0;
			m_point3d_old[i][2]=0;
		}
		FILE* p3dfile;
		if((p3dfile=fopen(m_3dpos,_T("r")))==NULL)
			MessageBox(_T("3D�����ļ��򿪴���!"),NULL,MB_ICONERROR|MB_SYSTEMMODAL);
		else
		{
			for(i=0;i<MAXPOINT;i++)
			{
				fscanf(p3dfile,"%f",&m_point3d[i][0]);
				fscanf(p3dfile,"%f",&m_point3d[i][1]);	
				fscanf(p3dfile,"%f",&m_point3d[i][2]);
				m_point3d_old[i][0]=m_point3d[i][0];
				m_point3d_old[i][1]=m_point3d[i][1];
				m_point3d_old[i][2]=m_point3d[i][2];
				if((m_point3d[i][0]==0)&&(m_point3d[i][1]==0)&&(m_point3d[i][2]==0))
					break;
				n3dpoint++;
			}
			fclose(p3dfile);
			if(n3dpoint==MAXPOINT)
			{
				MessageBox(_T("���ݵ�������������������ʾ���������ܵ���ͼ����ʾ������!"),NULL,
				MB_ICONWARNING|MB_SYSTEMMODAL);
				return;
			}
	
			//��һ��3D�����꣬ʹ��������ԭ���Ҹ����㵽���ĵ�ƽ������Ϊ1
			//����xyz������ľ�ֵ
			float mean[3]={0,0,0};
			for(i=0;i<n3dpoint;i++)
			{
				mean[0]+=m_point3d[i][0];
				mean[1]+=m_point3d[i][1];
				mean[2]+=m_point3d[i][2];
			}
			mean[0]=mean[0]/n3dpoint;
			mean[1]=mean[1]/n3dpoint;
			mean[2]=mean[2]/n3dpoint;
			//ʹ���������ԭ��
			for(i=0;i<n3dpoint;i++)
			{
				m_point3d[i][0]=m_point3d[i][0]-mean[0];
				m_point3d[i][1]=m_point3d[i][1]-mean[1];
				m_point3d[i][2]=m_point3d[i][2]-mean[2];
			}
			//ʹ���ǵ�ԭ���ƽ�������ƽ����1
			float meandis=0;
			for(i=0;i<n3dpoint;i++)
			{
				meandis+=(float)pow(m_point3d[i][0]*m_point3d[i][0]+m_point3d[i][1]*m_point3d[i][1]+m_point3d[i][2]*m_point3d[i][2],0.5);
			}
			meandis=meandis/n3dpoint;
			for(i=0;i<n3dpoint;i++)
			{
				m_point3d[i][0]=m_point3d[i][0]/meandis;
				m_point3d[i][1]=m_point3d[i][1]/meandis;
				m_point3d[i][2]=m_point3d[i][2]/meandis;
			}
		}
		}*/
	
}

void SelectDLG::OnLoadtex() 
{
	// TODO: Add your control notification handler code here
	CFileDialog m_ldFile(TRUE,_T("*"),_T("texturefile"),NULL,_T("Image Files (*.jpg;*.bmp)|*.jpg;*.bmp||"));

	if (m_ldFile.DoModal()==IDOK)
	{
		m_texpos=m_ldFile.GetPathName();
		UpdateData(FALSE);
		if(!mDib.Load((char*)(LPCTSTR)m_texpos))
			MessageBox(_T("����ͼ��򿪴���!"),NULL,MB_ICONERROR|MB_SYSTEMMODAL);
		else
		{
			//��������ͼ��Ĵ�Сʹ֮Ϊ2����(�˴�����Ϊ512x512)
			mDib2=mDib;
			ImageSize.cx=mDib.CX();
			ImageSize.cy=mDib.CY();
			mDib2.Change(512,512,24,NULL);
			GLubyte *pTextureBits=(GLubyte *)mDib.Buffer();
			GLubyte *pTextureBits2=(GLubyte *)mDib2.Buffer();
			gluScaleImage(GL_BGR_EXT,ImageSize.cx,ImageSize.cy,GL_UNSIGNED_BYTE,
				pTextureBits,512,512,GL_UNSIGNED_BYTE,pTextureBits2);
		}
	}	
}

void SelectDLG::OnLoadtri() 
{
	// TODO: Add your control notification handler code here
	/*
	static char szFilter[]="TXT�ļ�(*.txt)|*.txt||";
		CFileDialog m_ldFile(TRUE,_T("txt"),_T("tridatafile"),OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,szFilter);
	 
	    if (m_ldFile.DoModal()==IDOK)
		{   
			m_tripos=m_ldFile.GetPathName();
			UpdateData(FALSE);
			
			//����txt�ļ�
			ntri=0;
			delete triangle;
			for(int i=0;i<MAXPOINT;i++)
			{
				tritemp[i][0]=0;
				tritemp[i][1]=0;
				tritemp[i][2]=0;
			}
			FILE* ptrifile;
			if((ptrifile=fopen(m_tripos,_T("r")))==NULL)
				MessageBox(_T("���ǻ��������ݴ򿪴���!"),NULL,MB_ICONERROR|MB_SYSTEMMODAL);
			else
			{
				for(i=0;i<MAXPOINT;i++)
				{
					fscanf(ptrifile,"%d",&tritemp[i][0]);
					fscanf(ptrifile,"%d",&tritemp[i][1]);
					fscanf(ptrifile,"%d",&tritemp[i][2]);
					if((tritemp[i][0]==0)&&(tritemp[i][1]==0)&&(tritemp[i][2]==0))
						break;
					ntri++;
				}
				fclose(ptrifile);
				triangle=new int*[ntri];
				for(i=0;i<ntri;i++)
				{
					triangle[i]=new int[3];
					for(int j=0;j<3;j++)
						triangle[i][j]=tritemp[i][j]-1;		
				}
			}
		}	*/
	
}

//��ά�����ǻ�����/////////////////////////////////////////////////////////////////////
void SelectDLG::triangulation(float m_point2d[MAXPOINT][2], int numberofcorner, 
							  int vertexindex[], int & numberoftriangle)
{
  triangulateio_s in,mid,vorout;
  in.numberofpoints = numberofcorner;
  in.numberofpointattributes = 0;
  in.pointlist = (float  *) malloc(in.numberofpoints * 2 * sizeof(float ));
  int i;
  for(i=0;i<in.numberofpoints;i++)
  {
  	  in.pointlist[i*2]=m_point2d[i][0];
	  in.pointlist[i*2+1]=m_point2d[i][1];
  }

  in.numberofsegments = 0;
  in.numberofholes = 0;
  in.pointmarkerlist = (int *) NULL; 
  mid.pointlist = (float  *) NULL;            
  mid.pointattributelist = (float  *) NULL;
  mid.pointmarkerlist = (int *) NULL; 
  mid.trianglelist = (int *) NULL;        
  mid.triangleattributelist = (float  *) NULL;
  mid.neighborlist = (int *) NULL;         
  mid.segmentlist = (int *) NULL;
  mid.segmentmarkerlist = (int *) NULL;
  mid.edgelist = (int *) NULL;            
  mid.edgemarkerlist = (int *) NULL; 
  vorout.pointlist = (float  *) NULL;        
  vorout.pointattributelist = (float  *) NULL;
  vorout.edgelist = (int *) NULL;         
  vorout.normlist = (float  *) NULL;         
  triangulate("ezv", &in, &mid, &vorout);
  numberoftriangle=mid.numberoftriangles;

  for (i = 0; i < mid.numberoftriangles; i++) 
  {	 
	  for (int j = 0; j < mid.numberofcorners; j++)
	  {		  
		  vertexindex[i * mid.numberofcorners + j]=
			  mid.trianglelist[i * mid.numberofcorners + j];
	  }	 
  }
 // fclose(angle);
  free(in.pointlist);
  free(mid.pointlist);
  free(mid.pointattributelist);
  free(mid.pointmarkerlist);
  free(mid.trianglelist);
  free(mid.neighborlist);
  free(mid.segmentlist);
  free(mid.segmentmarkerlist);
  free(mid.edgelist);
  free(mid.edgemarkerlist);
  free(vorout.pointlist);
  free(vorout.pointattributelist);
  free(vorout.edgelist);
  free(vorout.normlist);
}

