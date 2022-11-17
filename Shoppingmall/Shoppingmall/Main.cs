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

        private void Right_Click(object sender, MouseEventArgs e)
        {
            if(e.Button == System.Windows.Forms.MouseButtons.Right)
            {
                Login login = new Login(this);
                login.ShowDialog();
            }
        }
    }
}
