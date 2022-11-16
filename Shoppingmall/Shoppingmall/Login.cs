using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Shoppingmall
{
    public partial class Login : Form
    {
        Main main;


        public Login(Main M)
        {
            InitializeComponent();
            main = M;
        }

        private void Login_OK()
        {
            string userID = ID.Text;
            string userPW = PW.Text;

            if (userID.Equals("WindowP") && userPW.Equals("1"))
            {
                MessageBox.Show("로그인 되었습니다.", "로그인");
                this.Close();
                main.Login_button.Text = userID;
            }

            else
            {
                Login_Fail.Text = "아이디와 비밀번호를 확인해 주세요.";
            }
        }

        private void Login_button_Click(object sender, EventArgs e)
        {
            Login_OK();
        }

        private void PW_KeyUp(object sender, KeyEventArgs e)
        {
            if(e.KeyCode == Keys.Enter)
            {
                Login_OK();
            }
        }
    }
}
