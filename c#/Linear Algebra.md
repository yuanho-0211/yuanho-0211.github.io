## 線性代數作業
新增:
###存檔功能

###Mirror功能(左右鏡射)

###Flip功能(上下翻轉)

###灰階化

###底片化

```c
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace s1130824_hw1
{
    public partial class s1130824 : Form
    {
        public s1130824()
        {
            InitializeComponent();
        }

        private void btnOpen_Click(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog();
            if (dlg.ShowDialog() == DialogResult.OK)
            {
                this.pictureBox1.Image = new Bitmap(dlg.FileName);
            }
        }

        private void btnRotation_Click(object sender, EventArgs e)
        {
            if (this.pictureBox1.Image != null)
            {
                float angle = float.Parse(this.textBox1.Text);
                this.pictureBox2.Image = RotateImageByMatrix((Bitmap)this.pictureBox1.Image, angle);
                this.pictureBox2.Refresh();
            }
        }

        private Bitmap RotateImageByMatrix(Bitmap source, float angle)
        {
            double radians = angle * Math.PI / 180;
            double cos = Math.Cos(radians);
            double sin = Math.Sin(radians);
            Bitmap rotated = new Bitmap(source.Width, source.Height);
            rotated.SetResolution(source.HorizontalResolution, source.VerticalResolution);

            using (Graphics g = Graphics.FromImage(rotated))
            {
                g.Clear(Color.White);
                for (int i = 0; i < source.Width; i++)
                {
                    for (int j = 0; j < source.Height; j++)
                    {
                        int xNew = (int)((i - source.Width / 2) * cos - (j - source.Height / 2) * sin + source.Width / 2);
                        int yNew = (int)((i - source.Width / 2) * sin + (j - source.Height / 2) * cos + source.Height / 2);

                        if (xNew >= 0 && xNew < source.Width && yNew >= 0 && yNew < source.Height)
                        {
                            rotated.SetPixel(xNew, yNew, source.GetPixel(i, j));
                        }
                    }
                }
            }
            return rotated;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            if (this.pictureBox2.Image != null)
            {
                SaveFileDialog dlg = new SaveFileDialog();
                dlg.Filter = "PNG Image|*.png|JPEG Image|*.jpg|Bitmap Image|*.bmp";
                if (dlg.ShowDialog() == DialogResult.OK)
                {
                    this.pictureBox2.Image.Save(dlg.FileName);
                }
            }
        }

        private void btnFlip_Click(object sender, EventArgs e)
        {
            if (this.pictureBox1.Image != null)
            {
                this.pictureBox2.Image = FlipImageByMatrix((Bitmap)this.pictureBox1.Image);
                this.pictureBox2.Refresh();
            }
        }

        private Bitmap FlipImageByMatrix(Bitmap source)
        {
            Bitmap flip = new Bitmap(source.Width, source.Height);
            flip.SetResolution(source.HorizontalResolution, source.VerticalResolution);
            using (Graphics g = Graphics.FromImage(flip))
            {
                g.Clear(Color.White);  
                for (int i = 0; i < source.Width; i++)
                {
                    for (int j = 0; j < source.Height; j++)
                    {
                        int xNew = (int)(i);
                        int yNew = (int)(source.Height - 1 - j);
                        if (xNew >= 0 && xNew < source.Width && yNew >= 0 && yNew < source.Height)
                        {
                            flip.SetPixel(xNew, yNew, source.GetPixel(i, j));
                        }
                    }
                }
            }
            return flip;
        }

        private void btnMirror_Click(object sender, EventArgs e)
        {
            if (this.pictureBox1.Image != null)
            {
                this.pictureBox2.Image = MirrorImageByMatrix((Bitmap)this.pictureBox1.Image);
                this.pictureBox2.Refresh();
            }
        }

        private Bitmap MirrorImageByMatrix(Bitmap source)
        {
            Bitmap mirror = new Bitmap(source.Width, source.Height);
            mirror.SetResolution(source.HorizontalResolution, source.VerticalResolution);
            using (Graphics g = Graphics.FromImage(mirror))
            {
                g.Clear(Color.White); 
                for (int i = 0; i < source.Width; i++)
                {
                    for (int j = 0; j < source.Height; j++)
                    {
                        int xNew = (int)(source.Width - 1 - i);
                        int yNew = (int)(j);
                        if (xNew >= 0 && xNew < source.Width && yNew >= 0 && yNew < source.Height)
                        {
                            mirror.SetPixel(xNew, yNew, source.GetPixel(i, j));
                        }
                    }
                }
            }
            return mirror;
        }

        private void btnGray_Click(object sender, EventArgs e)
        {
            if (this.pictureBox1.Image != null)
            {
                this.pictureBox2.Image = GrayImageByMatrix((Bitmap)this.pictureBox1.Image);
                this.pictureBox2.Refresh();
            }
        }

        private Bitmap GrayImageByMatrix(Bitmap source)
        {
            Bitmap gray = new Bitmap(source.Width, source.Height);
            gray.SetResolution(source.HorizontalResolution, source.VerticalResolution);
            for (int i = 0; i < source.Width; i++)
            {
                for (int j = 0; j < source.Height; j++)
                {
                    Color pixel = source.GetPixel(i, j);
                    int grayv = (pixel.R + pixel.G + pixel.B) / 3;
                    Color grayc = Color.FromArgb(grayv, grayv, grayv);
                    gray.SetPixel(i, j, grayc);
                }
            }
            return gray;
        }

        private void btnNegative_Click(object sender, EventArgs e)
        {
            if (this.pictureBox1.Image != null)
            {
                this.pictureBox2.Image = NegativeImageByMatrix((Bitmap)this.pictureBox1.Image);
                this.pictureBox2.Refresh();
            }
        }
        private Bitmap NegativeImageByMatrix(Bitmap source)
        {
            Bitmap neg = new Bitmap(source.Width, source.Height);
            neg.SetResolution(source.HorizontalResolution, source.VerticalResolution);
            for (int i = 0; i < source.Width; i++)
            {
                for (int j = 0; j < source.Height; j++)
                {
                    Color pixel = source.GetPixel(i, j);
                    Color negv = Color.FromArgb(255 - pixel.R, 255 - pixel.G, 255 - pixel.B);
                    neg.SetPixel(i, j, negv);
                }
            }
            return neg;
        }
    }
}
```
