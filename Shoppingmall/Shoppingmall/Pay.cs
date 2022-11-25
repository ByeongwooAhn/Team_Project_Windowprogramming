using Shoppingmall;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Design;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Shoppingmall
{
    public partial class Pay : Form
    {
        public Pay()
        {
            InitializeComponent();
        }

        private void label8_Click(object sender, EventArgs e) //이용동의
        {
            MessageBox.Show("1. 개인정보 수집목적 및 이용목적 : 비회원 구매 서비스 제공2. 수집하는 개인정보 항목- 주문 시, 성명, 주소, 전화번호, 이메일, 결제정보, 비회원 결제 비밀번호- 취소/교환/반품 신청 시, 환불계좌정보(은행명, 계좌번호, 예금주)3. 개인정보의 보유기간 및 이용기간원칙적으로, 개인정보 수집 및 이용목적이 달성된 후에는 해당 정보를 지체 없이 파기합니다. 단, 다음의 정보에 대해서는 아래의 이유로 명시한 기간 동안 보존합니다.가. 회사 내부 방침에 의한 정보 보유 사유· 부정거래 방지 및 쇼핑몰 운영방침에 따른 보관 : OO년나. 관련 법령에 의한 정보보유 사유o 계약 또는 청약철회 등에 관한 기록-보존이유 : 전자상거래등에서의소비자보호에관한법률-보존기간 : 5년o 대금 결제 및 재화 등의 공급에 관한 기록-보존이유: 전자상거래등에서의소비자보호에관한법률-보존기간 : 5년 o 소비자 불만 또는 분쟁처리에 관한 기록-보존이유 : 전자상거래등에서의소비자보호에관한법률-보존기간 : 3년 o 로그 기록 -보존이유: 통신비밀보호법-보존기간 : 3개월※ 동의를 거부할 수 있으나 거부시 비회원 구매 서비스 이용이 불가능합니다."); ;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (radioButton1.Checked == false)
            {
                MessageBox.Show("약관에 동의해 주세요.");
            }
            else if(radioButton1.Checked == true)
            {
                if (checkBox1.Checked == true && checkBox2.Checked == false)
                {
                    Card _Form = new Card();
                    _Form.Show();
                }
                else if (checkBox2.Checked == true && checkBox1.Checked == false)
                {
                    MessageBox.Show("결제가 완료되었습니다.\n금일 24시까지 OO은행 998877-00-123456으로 입금해 주세요");
                }
            }
        }
    }
}