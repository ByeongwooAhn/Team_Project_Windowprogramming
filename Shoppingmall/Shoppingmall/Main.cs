using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Shoppingmall
{
    public partial class Main : Form
    {
        public Main()
        {
            InitializeComponent();
        }

        private void Login_button_Click(object sender, EventArgs e)
        {
            Login login = new Login(this);
            login.ShowDialog();
        }

        private void Price1_Click(object sender, EventArgs e)
        {
            Pay pay = new Pay();

            if (Login_button.Text == "Login")
            {
                DialogResult result = MessageBox.Show("현재 비회원 상태입니다.\n비회원으로 주문하시겠습니까?", "알림", MessageBoxButtons.YesNo);

                if(result == DialogResult.Yes)
                {
                    pay.ShowDialog();
                }
            }
            else
            {
                pay.ShowDialog();
            }
        }

        private void Login_button_MouseDown(object sender, MouseEventArgs e)
        {
<<<<<<< HEAD
            if(e.Button == System.Windows.Forms.MouseButtons.Right)
=======
            /* if(e.Button== MouseButtons.Right)
>>>>>>> 97dc22f749cd1c47f65318b6ab70d69c26eb7244
            {
                DialogResult result = MessageBox.Show("로그아웃 하시겠습니까?","알림", MessageBoxButtons.YesNo);
                if(result == DialogResult.Yes) 
                {
                    MessageBox.Show("로그아웃되었습니다.");
                    Login_button.Text = "Login";
                }

            }*/
        }

        private void 내정보ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            My_Profile Profile = new My_Profile();
            Profile.ShowDialog();
        }

        private void 로그아웃ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult result = MessageBox.Show("로그아웃 하시겠습니까?", "알림", MessageBoxButtons.YesNo);
            if (result == DialogResult.Yes)
            {
                MessageBox.Show("로그아웃되었습니다.");
                Login_button.Text = "Login";
            }
        }
    }
}
