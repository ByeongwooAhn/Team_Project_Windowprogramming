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
    public partial class Card : Form
    {
        public Card()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("결제가 완료되었습니다!");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
