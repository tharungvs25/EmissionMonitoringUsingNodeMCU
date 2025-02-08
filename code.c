using System;
using System.Windows.Forms;
using System.Diagnostics;

namespace StopwatchApp
{
    public partial class Form1 : Form
    {
        private Stopwatch stopwatch = new Stopwatch();

        public Form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            TimeSpan elapsed = stopwatch.Elapsed;
            lblTime.Text = $"{elapsed.Hours:00}:{elapsed.Minutes:00}:{elapsed.Seconds:00}.{elapsed.Milliseconds / 10:00}";
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            stopwatch.Start();
            timer1.Start();
        }

        private void btnStop_Click(object sender, EventArgs e)
        {
            stopwatch.Stop();
            timer1.Stop();
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            stopwatch.Reset();
            lblTime.Text = "00:00:00.00";
        }
    }
}
