using MySql.Data.MySqlClient;
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
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using MySqlCommand = MySql.Data.MySqlClient.MySqlCommand;
using MySqlConnection = MySql.Data.MySqlClient.MySqlConnection;

namespace Shoppingmall
{
    public partial class Login : Form
    {
        Main main;
        string connstr = "Server = 127.0.0.1;Port=3306;Database=member;Uid=root;Pwd=root";

        public Login(Main M)
        {
            InitializeComponent();
            main = M;
        }

        public DataSet Login_Search()
        {
            string sql = "select * from member_name where 아이디 = '" + ID.Text + "' and 비밀번호 = '" + PW.Text + "'";
            DataSet ds = new DataSet();

            using (MySqlConnection conn = new MySqlConnection(connstr))
            {
                try
                {
                    conn.Open();
                    MySqlCommand cmd = new MySqlCommand(sql, conn);
                    cmd.ExecuteNonQuery();
                }
                catch (Exception ex) { }
            }

            using (MySqlConnection conn = new MySqlConnection(connstr))
            {
                try
                {

                    {
                        conn.Open();
                        MySqlDataAdapter da = new MySqlDataAdapter(sql, conn);
                        da.Fill(ds);
                    }

                }
                catch (Exception ex)
                {

                }
            }
            return ds;
        }

        public void Login_Check(string ID, string PW)
        {
            DataSet ds;
            ds = Login_Search();

            using (MySqlConnection conn = new MySqlConnection(connstr))
            {
                try
                {
                    conn.Open();
                    if (ds.Tables[0].Rows.Count > 0)
                    {
                        foreach (DataRow row in ds.Tables[0].Rows)
                        {
                            if (ID == row["아이디"].ToString() && PW == row["비밀번호"].ToString())
                            {
                                Close();
                                main.Login_button.Text = ID;
                            }
                        }
                    }
                    else
                    {
                        Login_Result.Text = "아이디와 패스워드를 확인하여 주십시오.";
                    }
                }
                catch (Exception ex) { }
            }

        }

        private void Login_button_Click(object sender, EventArgs e)
        {
            Login_Check(ID.Text, PW.Text);
        }

        private void PW_KeyUp(object sender, KeyEventArgs e)
        {
            if(e.KeyCode == Keys.Enter)
            {
                Login_Check(ID.Text, PW.Text);
            }
        }

        private void ID_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                Login_Check(ID.Text, PW.Text);
            }
        }

        private void Tab_Login_Click(object sender, EventArgs e)
        {
            Not_Tab.Visible = false;
        }

        private void Tab_Not_Click(object sender, EventArgs e)
        {
            Not_Tab.Visible = true;
        }
    }
}
