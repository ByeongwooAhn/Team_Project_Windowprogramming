namespace Shoppingmall
{
    partial class Login
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel1 = new System.Windows.Forms.Panel();
            this.panel6 = new System.Windows.Forms.Panel();
            this.panel5 = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.panel3 = new System.Windows.Forms.Panel();
            this.panel4 = new System.Windows.Forms.Panel();
            this.ID = new System.Windows.Forms.TextBox();
            this.PW = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.Login_Result = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.Login_Tab = new System.Windows.Forms.Panel();
            this.Tab_Login = new System.Windows.Forms.Button();
            this.Tab_Not = new System.Windows.Forms.Button();
            this.Not_Tab = new System.Windows.Forms.Panel();
            this.label3 = new System.Windows.Forms.Label();
            this.panel8 = new System.Windows.Forms.Panel();
            this.panel9 = new System.Windows.Forms.Panel();
            this.panel10 = new System.Windows.Forms.Panel();
            this.label4 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.Login_Tab.SuspendLayout();
            this.Not_Tab.SuspendLayout();
            this.panel8.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BackgroundImage = global::Shoppingmall.Properties.Resources.제목_없는_디자인;
            this.panel1.Controls.Add(this.panel6);
            this.panel1.Controls.Add(this.panel5);
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(571, 392);
            this.panel1.TabIndex = 0;
            // 
            // panel6
            // 
            this.panel6.Location = new System.Drawing.Point(12, 450);
            this.panel6.Name = "panel6";
            this.panel6.Size = new System.Drawing.Size(549, 206);
            this.panel6.TabIndex = 13;
            // 
            // panel5
            // 
            this.panel5.Location = new System.Drawing.Point(12, 450);
            this.panel5.Name = "panel5";
            this.panel5.Size = new System.Drawing.Size(448, 255);
            this.panel5.TabIndex = 13;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.Black;
            this.panel2.Controls.Add(this.panel3);
            this.panel2.Location = new System.Drawing.Point(46, 70);
            this.panel2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(457, 1);
            this.panel2.TabIndex = 1;
            // 
            // panel3
            // 
            this.panel3.BackColor = System.Drawing.Color.Black;
            this.panel3.Location = new System.Drawing.Point(0, 88);
            this.panel3.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(457, 125);
            this.panel3.TabIndex = 2;
            // 
            // panel4
            // 
            this.panel4.BackColor = System.Drawing.Color.Black;
            this.panel4.Location = new System.Drawing.Point(46, 195);
            this.panel4.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(457, 1);
            this.panel4.TabIndex = 2;
            // 
            // ID
            // 
            this.ID.BackColor = System.Drawing.Color.White;
            this.ID.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.ID.Location = new System.Drawing.Point(46, 48);
            this.ID.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.ID.Name = "ID";
            this.ID.Size = new System.Drawing.Size(457, 18);
            this.ID.TabIndex = 3;
            this.ID.KeyUp += new System.Windows.Forms.KeyEventHandler(this.ID_KeyUp);
            // 
            // PW
            // 
            this.PW.BackColor = System.Drawing.Color.White;
            this.PW.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.PW.Location = new System.Drawing.Point(46, 172);
            this.PW.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.PW.Name = "PW";
            this.PW.Size = new System.Drawing.Size(457, 18);
            this.PW.TabIndex = 4;
            this.PW.UseSystemPasswordChar = true;
            this.PW.KeyUp += new System.Windows.Forms.KeyEventHandler(this.PW_KeyUp);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Calibri", 15F, System.Drawing.FontStyle.Bold);
            this.label1.ForeColor = System.Drawing.SystemColors.ControlDark;
            this.label1.Location = new System.Drawing.Point(38, 18);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(120, 31);
            this.label1.TabIndex = 5;
            this.label1.Text = "Username";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Calibri", 15F, System.Drawing.FontStyle.Bold);
            this.label2.ForeColor = System.Drawing.SystemColors.ControlDark;
            this.label2.Location = new System.Drawing.Point(38, 142);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(113, 31);
            this.label2.TabIndex = 6;
            this.label2.Text = "Password";
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.button1.FlatAppearance.BorderSize = 0;
            this.button1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F);
            this.button1.ForeColor = System.Drawing.Color.White;
            this.button1.Location = new System.Drawing.Point(171, 697);
            this.button1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(229, 45);
            this.button1.TabIndex = 7;
            this.button1.TabStop = false;
            this.button1.Text = "Login";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.Login_button_Click);
            // 
            // Login_Result
            // 
            this.Login_Result.AutoSize = true;
            this.Login_Result.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold);
            this.Login_Result.ForeColor = System.Drawing.Color.Red;
            this.Login_Result.Location = new System.Drawing.Point(49, 659);
            this.Login_Result.Name = "Login_Result";
            this.Login_Result.Size = new System.Drawing.Size(0, 20);
            this.Login_Result.TabIndex = 8;
            // 
            // button2
            // 
            this.button2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.button2.FlatAppearance.BorderSize = 0;
            this.button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F);
            this.button2.ForeColor = System.Drawing.Color.White;
            this.button2.Location = new System.Drawing.Point(171, 750);
            this.button2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(229, 45);
            this.button2.TabIndex = 9;
            this.button2.TabStop = false;
            this.button2.Text = "Sign Up";
            this.button2.UseVisualStyleBackColor = false;
            // 
            // Login_Tab
            // 
            this.Login_Tab.BackColor = System.Drawing.Color.Transparent;
            this.Login_Tab.Controls.Add(this.Not_Tab);
            this.Login_Tab.Controls.Add(this.label1);
            this.Login_Tab.Controls.Add(this.panel2);
            this.Login_Tab.Controls.Add(this.panel4);
            this.Login_Tab.Controls.Add(this.label2);
            this.Login_Tab.Controls.Add(this.ID);
            this.Login_Tab.Controls.Add(this.PW);
            this.Login_Tab.Location = new System.Drawing.Point(12, 450);
            this.Login_Tab.Name = "Login_Tab";
            this.Login_Tab.Size = new System.Drawing.Size(549, 206);
            this.Login_Tab.TabIndex = 10;
            // 
            // Tab_Login
            // 
            this.Tab_Login.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(128)))));
            this.Tab_Login.FlatAppearance.BorderSize = 0;
            this.Tab_Login.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.Tab_Login.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.Tab_Login.ForeColor = System.Drawing.Color.White;
            this.Tab_Login.Location = new System.Drawing.Point(14, 398);
            this.Tab_Login.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Tab_Login.Name = "Tab_Login";
            this.Tab_Login.Size = new System.Drawing.Size(229, 45);
            this.Tab_Login.TabIndex = 11;
            this.Tab_Login.TabStop = false;
            this.Tab_Login.Text = "Login";
            this.Tab_Login.UseVisualStyleBackColor = false;
            this.Tab_Login.Click += new System.EventHandler(this.Tab_Login_Click);
            // 
            // Tab_Not
            // 
            this.Tab_Not.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(128)))));
            this.Tab_Not.FlatAppearance.BorderSize = 0;
            this.Tab_Not.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.Tab_Not.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.Tab_Not.ForeColor = System.Drawing.Color.White;
            this.Tab_Not.Location = new System.Drawing.Point(332, 398);
            this.Tab_Not.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Tab_Not.Name = "Tab_Not";
            this.Tab_Not.Size = new System.Drawing.Size(229, 45);
            this.Tab_Not.TabIndex = 12;
            this.Tab_Not.TabStop = false;
            this.Tab_Not.Text = "Not_Member_Order";
            this.Tab_Not.UseVisualStyleBackColor = false;
            this.Tab_Not.Click += new System.EventHandler(this.Tab_Not_Click);
            // 
            // Not_Tab
            // 
            this.Not_Tab.BackColor = System.Drawing.Color.Transparent;
            this.Not_Tab.Controls.Add(this.label3);
            this.Not_Tab.Controls.Add(this.panel8);
            this.Not_Tab.Controls.Add(this.panel10);
            this.Not_Tab.Controls.Add(this.label4);
            this.Not_Tab.Controls.Add(this.textBox1);
            this.Not_Tab.Controls.Add(this.textBox2);
            this.Not_Tab.Location = new System.Drawing.Point(0, 0);
            this.Not_Tab.Name = "Not_Tab";
            this.Not_Tab.Size = new System.Drawing.Size(549, 206);
            this.Not_Tab.TabIndex = 11;
            this.Not_Tab.Visible = false;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Calibri", 15F, System.Drawing.FontStyle.Bold);
            this.label3.ForeColor = System.Drawing.SystemColors.ControlDark;
            this.label3.Location = new System.Drawing.Point(38, 18);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(75, 31);
            this.label3.TabIndex = 5;
            this.label3.Text = "Name";
            // 
            // panel8
            // 
            this.panel8.BackColor = System.Drawing.Color.Black;
            this.panel8.Controls.Add(this.panel9);
            this.panel8.Location = new System.Drawing.Point(46, 70);
            this.panel8.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel8.Name = "panel8";
            this.panel8.Size = new System.Drawing.Size(457, 1);
            this.panel8.TabIndex = 1;
            // 
            // panel9
            // 
            this.panel9.BackColor = System.Drawing.Color.Black;
            this.panel9.Location = new System.Drawing.Point(0, 88);
            this.panel9.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel9.Name = "panel9";
            this.panel9.Size = new System.Drawing.Size(457, 125);
            this.panel9.TabIndex = 2;
            // 
            // panel10
            // 
            this.panel10.BackColor = System.Drawing.Color.Black;
            this.panel10.Location = new System.Drawing.Point(46, 195);
            this.panel10.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.panel10.Name = "panel10";
            this.panel10.Size = new System.Drawing.Size(457, 1);
            this.panel10.TabIndex = 2;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Calibri", 15F, System.Drawing.FontStyle.Bold);
            this.label4.ForeColor = System.Drawing.SystemColors.ControlDark;
            this.label4.Location = new System.Drawing.Point(38, 142);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(245, 31);
            this.label4.TabIndex = 6;
            this.label4.Text = "Birth_Date(YYMMDD)";
            // 
            // textBox1
            // 
            this.textBox1.BackColor = System.Drawing.Color.White;
            this.textBox1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBox1.Location = new System.Drawing.Point(46, 48);
            this.textBox1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(457, 18);
            this.textBox1.TabIndex = 3;
            // 
            // textBox2
            // 
            this.textBox2.BackColor = System.Drawing.Color.White;
            this.textBox2.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.textBox2.Location = new System.Drawing.Point(46, 172);
            this.textBox2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(457, 18);
            this.textBox2.TabIndex = 4;
            this.textBox2.UseSystemPasswordChar = true;
            // 
            // Login
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(573, 814);
            this.Controls.Add(this.Tab_Not);
            this.Controls.Add(this.Tab_Login);
            this.Controls.Add(this.Login_Tab);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.Login_Result);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.panel1);
            this.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Name = "Login";
            this.Text = "로그인";
            this.panel1.ResumeLayout(false);
            this.panel2.ResumeLayout(false);
            this.Login_Tab.ResumeLayout(false);
            this.Login_Tab.PerformLayout();
            this.Not_Tab.ResumeLayout(false);
            this.Not_Tab.PerformLayout();
            this.panel8.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.Panel panel4;
        private System.Windows.Forms.TextBox PW;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label Login_Result;
        public System.Windows.Forms.TextBox ID;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Panel Login_Tab;
        private System.Windows.Forms.Panel panel6;
        private System.Windows.Forms.Panel panel5;
        private System.Windows.Forms.Button Tab_Login;
        private System.Windows.Forms.Button Tab_Not;
        private System.Windows.Forms.Panel Not_Tab;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Panel panel8;
        private System.Windows.Forms.Panel panel9;
        private System.Windows.Forms.Panel panel10;
        private System.Windows.Forms.Label label4;
        public System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
    }
}