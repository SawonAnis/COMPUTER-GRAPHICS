#include <GL/freeglut.h>
#include <mmsystem.h>
#include <math.h>


bool isRain = false;
bool isLightning = false;


void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)

{

    glBegin(GL_POLYGON);

    glVertex2f(cx, cy);

    for (int i = 0; i <= 360; i++)

    {

        float angle = i * 3.1416 / 180;

        float x = rx * cos(angle);

        float y = ry * sin(angle);

        glVertex2f((x + cx), (y + cy));

    }

    glEnd();

}

void Bench()

{

    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(2, 7.6);

    glVertex2f(4, 7.6);

    glVertex2f(4, 7);

    glVertex2f(2, 7);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(2.1, 8);

    glVertex2f(3.9, 8);

    glVertex2f(3.9, 7.8);

    glVertex2f(2.1, 7.8);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(2.1, 8.4);

    glVertex2f(3.9, 8.4);

    glVertex2f(3.9, 8.2);

    glVertex2f(2.1, 8.2);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(2.2, 8.5);

    glVertex2f(2.4, 8.5);

    glVertex2f(2.4, 7.6);

    glVertex2f(2.2, 7.6);



    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(3.6, 8.5);

    glVertex2f(3.8, 8.5);

    glVertex2f(3.8, 7.6);

    glVertex2f(3.6, 7.6);



    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(2.1, 7);

    glVertex2f(2.2, 7);

    glVertex2f(2.2, 6.5);

    glVertex2f(2.1, 6.5);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(3.8, 7);

    glVertex2f(3.9, 7);

    glVertex2f(3.9, 6.5);

    glVertex2f(3.8, 6.5);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(3.4, 7);

    glVertex2f(3.5, 7);

    glVertex2f(3.5, 6.7);

    glVertex2f(3.4, 6.7);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(2.4, 7);

    glVertex2f(2.5, 7);

    glVertex2f(2.5, 6.7);

    glVertex2f(2.4, 6.7);



    glEnd();



    glBegin(GL_LINES);

    glColor3ub(00, 00, 00);

    glVertex2f(2, 7.6);

    glVertex2f(4, 7.6);



    glVertex2f(4, 7.6);

    glVertex2f(4, 7);



    glVertex2f(2, 7);

    glVertex2f(4, 7);



    glVertex2f(2, 7.6);

    glVertex2f(2, 7);



    ////

    glVertex2f(2.1, 7);

    glVertex2f(2.2, 7);



    glVertex2f(2.2, 7);

    glVertex2f(2.2, 6.5);



    glVertex2f(2.2, 6.5);

    glVertex2f(2.1, 6.5);



    glVertex2f(2.1, 6.5);

    glVertex2f(2.1, 7);

    //

    glVertex2f(3.8, 7);

    glVertex2f(3.9, 7);



    glVertex2f(3.9, 7);

    glVertex2f(3.9, 6.5);



    glVertex2f(3.9, 6.5);

    glVertex2f(3.8, 6.5);



    glVertex2f(3.8, 6.5);

    glVertex2f(3.8, 7);

    //

    glVertex2f(2.4, 7);

    glVertex2f(2.5, 7);



    glVertex2f(2.5, 7);

    glVertex2f(2.5, 6.7);



    glVertex2f(2.5, 6.7);

    glVertex2f(2.4, 6.7);



    glVertex2f(2.4, 6.7);

    glVertex2f(2.4, 7);



    ///

    glVertex2f(3.4, 7);

    glVertex2f(3.5, 7);



    glVertex2f(3.5, 7);

    glVertex2f(3.5, 6.7);



    glVertex2f(3.5, 6.7);

    glVertex2f(3.4, 6.7);



    glVertex2f(3.4, 6.7);

    glVertex2f(3.4, 7);



    glEnd();





    ////BENCH 2





    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(18, 7.6);

    glVertex2f(20, 7.6);

    glVertex2f(20, 7);

    glVertex2f(18, 7);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(18.1, 8);

    glVertex2f(19.9, 8);

    glVertex2f(19.9, 7.8);

    glVertex2f(18.1, 7.8);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(18.1, 8.4);

    glVertex2f(19.9, 8.4);

    glVertex2f(19.9, 8.2);

    glVertex2f(18.1, 8.2);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(18.2, 8.5);

    glVertex2f(18.4, 8.5);

    glVertex2f(18.4, 7.6);

    glVertex2f(18.2, 7.6);



    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(248, 152, 128);

    glVertex2f(19.6, 8.5);

    glVertex2f(19.8, 8.5);

    glVertex2f(19.8, 7.6);

    glVertex2f(19.6, 7.6);



    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(18.1, 7);

    glVertex2f(18.2, 7);

    glVertex2f(18.2, 6.5);

    glVertex2f(18.1, 6.5);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(19.8, 7);

    glVertex2f(19.9, 7);

    glVertex2f(19.9, 6.5);

    glVertex2f(19.8, 6.5);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(19.4, 7);

    glVertex2f(19.5, 7);

    glVertex2f(19.5, 6.7);

    glVertex2f(19.4, 6.7);



    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(255, 255, 255);

    glVertex2f(18.4, 7);

    glVertex2f(18.5, 7);

    glVertex2f(18.5, 6.7);

    glVertex2f(18.4, 6.7);



    glEnd();



    glBegin(GL_LINES);

    glColor3ub(00, 00, 00);

    glVertex2f(18, 7.6);

    glVertex2f(20, 7.6);



    glVertex2f(20, 7.6);

    glVertex2f(20, 7);



    glVertex2f(18, 7);

    glVertex2f(20, 7);



    glVertex2f(18, 7.6);

    glVertex2f(18, 7);



    ////

    glVertex2f(18.1, 7);

    glVertex2f(18.2, 7);



    glVertex2f(18.2, 7);

    glVertex2f(18.2, 6.5);



    glVertex2f(18.2, 6.5);

    glVertex2f(18.1, 6.5);



    glVertex2f(18.1, 6.5);

    glVertex2f(18.1, 7);



    //

    glVertex2f(19.8, 7);

    glVertex2f(19.9, 7);



    glVertex2f(19.9, 7);

    glVertex2f(19.9, 6.5);



    glVertex2f(19.9, 6.5);

    glVertex2f(19.8, 6.5);



    glVertex2f(19.8, 6.5);

    glVertex2f(19.8, 7);

    //

    glVertex2f(18.4, 7);

    glVertex2f(18.5, 7);



    glVertex2f(18.5, 7);

    glVertex2f(18.5, 6.7);



    glVertex2f(18.5, 6.7);

    glVertex2f(18.4, 6.7);



    glVertex2f(18.4, 6.7);

    glVertex2f(18.4, 7);



    ///

    glVertex2f(19.4, 7);

    glVertex2f(19.5, 7);



    glVertex2f(19.5, 7);

    glVertex2f(19.5, 6.7);



    glVertex2f(19.5, 6.7);

    glVertex2f(19.4, 6.7);



    glVertex2f(19.4, 6.7);

    glVertex2f(19.4, 7);



    glEnd();

}

void Satalight()

{

    glBegin(GL_QUADS);

    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2f(5.5, 17.9);

    glVertex2f(9.5, 17.9);

    glVertex2f(9.5, 19.9);

    glVertex2f(5.5, 19.9);



    glColor3f(0.6f, 0.6f, 0.6f);

    glVertex2f(9.5, 19.3);

    glVertex2f(10, 19.3);

    glVertex2f(10, 18.8);

    glVertex2f(9.5, 18.8);



    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2f(10, 19.6);

    glVertex2f(12, 19.6);

    glVertex2f(12, 18.4);

    glVertex2f(10, 18.4);



    glColor3f(0.6f, 0.6f, 0.6f);

    glVertex2f(12, 19.3);

    glVertex2f(12.5, 19.3);

    glVertex2f(12.5, 18.8);

    glVertex2f(12, 18.8);



    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2f(12.5, 19.9);

    glVertex2f(16.5, 19.9);

    glVertex2f(16.5, 17.9);

    glVertex2f(12.5, 17.9);



    glEnd();

}

void LampPosts()

{

    glBegin(GL_QUADS);

    glColor3f(0.8f, 0.8f, 0.8f);

    glVertex2f(0.5, 6);

    glVertex2f(1.5, 6);

    glVertex2f(1.5f, 6.3f);

    glVertex2f(0.5f, 6.3f);



    glVertex2f(0.9f, 6.3f);

    glVertex2f(1.1f, 6.3f);

    glVertex2f(1.1f, 7.5);

    glVertex2f(0.9f, 7.5);



    glVertex2f(0.97f, 7.5);

    glVertex2f(1.03f, 7.5);

    glVertex2f(1.03f, 8.5f);

    glVertex2f(0.97f, 8.5f);



    glEnd();



    glBegin(GL_QUADS);





    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.9f, 8.5f);

    glVertex2f(1.1f, 8.5f);

    glVertex2f(1.2f, 8.8f);

    glVertex2f(0.8f, 8.8f);

    glEnd();



    glBegin(GL_QUADS);

    glColor3f(0.8f, 0.8f, 0.8f);

    glVertex2f(0.73f, 8.8f);

    glVertex2f(1.26f, 8.8f);

    glVertex2f(1.26f, 8.9f);

    glVertex2f(0.73f, 8.9f);



    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2f(1.26f, 8.9f);

    glVertex2f(0.73f, 8.9f);

    glVertex2f(0.995f, 9.4f);

    glEnd();



    ////lamppost 2



    glBegin(GL_QUADS);

    glColor3f(0.8f, 0.8f, 0.8f);

    glVertex2f(16.5, 6);

    glVertex2f(17.5, 6);

    glVertex2f(17.5f, 6.3f);

    glVertex2f(16.5f, 6.3f);



    glVertex2f(16.9f, 6.3f);

    glVertex2f(17.1f, 6.3f);

    glVertex2f(17.1f, 7.5);

    glVertex2f(16.9f, 7.5);



    glVertex2f(16.97f, 7.5);

    glVertex2f(17.03f, 7.5);

    glVertex2f(17.03f, 8.5f);

    glVertex2f(16.97f, 8.5f);

    glEnd();



    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(16.9f, 8.5f);

    glVertex2f(17.1f, 8.5f);

    glVertex2f(17.2f, 8.8f);

    glVertex2f(16.8f, 8.8f);



    glEnd();



    glBegin(GL_QUADS);

    glColor3f(0.8f, 0.8f, 0.8f);

    glVertex2f(16.73f, 8.8f);

    glVertex2f(17.26f, 8.8f);

    glVertex2f(17.26f, 8.9f);

    glVertex2f(16.73f, 8.9f);

    glEnd();



    glBegin(GL_TRIANGLES);

    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2f(17.26f, 8.9f);

    glVertex2f(16.73f, 8.9f);

    glVertex2f(16.995f, 9.4f);



    glEnd();

}

bool isDay = true; // Variable to track day/night mode



float x = 0;

float x1 = -10;

float y = 0;

void Update_1()

{

    x += .003;

    if (x > 30)

        x = -10;

}

void Update_2()

{

    y += .003;

    if (y > 23)

        y = -5;

}

void Update_3()

{

    x1 += .002;

    if (x1 > 23)

        x1 = -5;

}

float d = 0;

float d2 = 0;

void Update_cloud()

{

    d += .002;

    if (d > 12)

        d = -15;

}

void Update_cloud2()

{

    d2 += .005;

    if (d2 > 18)

        d2 = -10;

}

float human = 0;

void Update_Fixed_Human()

{

    human += .0005;

    if (human > 18)

        human = -5;

}

float sunn = -5;

float MoonN = -17;

void Moon_Update()

{

    MoonN += .001;



    if (MoonN > 3)

    {

        MoonN = -10;

        isDay = true;

        glClearColor(0.7, 0.7, 1.0, 1.0);



    }

}

void Update_sun()

{

    sunn += .001;



    if (sunn > 18)

    {

        sunn = -5;

        isDay = false;

        glClearColor(0.0, 0.0, 0.2, 1.0);



    }

}

void Fixed_Human1()

{

    //hUMAN1

    //hEAD

    glTranslatef(human, 0, 0);

    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(4.78, 6.62);

    glVertex2f(5.12, 6.62);

    glVertex2f(5.12, 6.38);

    glVertex2f(4.78, 6.38);



    glVertex2f(4.8, 6.6);

    glVertex2f(5.1, 6.6);

    glVertex2f(5.1, 6.4);

    glVertex2f(4.8, 6.4);



    glVertex2f(4.9, 6.4);

    glVertex2f(5, 6.4);

    glVertex2f(5, 6.28);

    glVertex2f(4.9, 6.28);



    glVertex2f(4.75, 6.28);

    glVertex2f(5.15, 6.28);

    glVertex2f(5.15, 5.9);

    glVertex2f(4.75, 5.9);



    glVertex2f(4.8, 5.9);

    glVertex2f(4.93, 5.9);

    glVertex2f(4.93, 5.3);

    glVertex2f(4.8, 5.3);



    glVertex2f(4.98, 5.9);

    glVertex2f(5.1, 5.9);

    glVertex2f(5.1, 5.3);

    glVertex2f(4.98, 5.3);



    glVertex2f(4.5, 6.15);

    glVertex2f(4.75, 6.15);

    glVertex2f(4.75, 6);

    glVertex2f(4.5, 6);



    glVertex2f(5.15, 6.15);

    glVertex2f(5.4, 6.15);

    glVertex2f(5.4, 6);

    glVertex2f(5.15, 6);



    glEnd();

    Update_Fixed_Human();



    //

}



//human 2

void Fixed_Human2() {



    glTranslatef(-human, 0, 0);

    circle(0.195, 0.195, 21.955, 6.6);

    circle(0.15, 0.15, 21.955, 6.6);



    glBegin(GL_QUADS);

    glColor3f(169, 184, 196);

    glVertex2f(21.9, 6.4);

    glVertex2f(22, 6.4);

    glVertex2f(22, 6.28);

    glVertex2f(21.9, 6.28);



    glVertex2f(21.75, 6.28);

    glVertex2f(22.15, 6.28);

    glVertex2f(22.15, 5.9);

    glVertex2f(21.75, 5.9);



    glVertex2f(21.8, 5.9);

    glVertex2f(21.93, 5.9);

    glVertex2f(21.93, 5.3);

    glVertex2f(21.8, 5.3);



    glVertex2f(21.98, 5.9);

    glVertex2f(22.1, 5.9);

    glVertex2f(22.1, 5.3);

    glVertex2f(21.98, 5.3);



    glVertex2f(21.5, 6.15);

    glVertex2f(21.75, 6.15);

    glVertex2f(21.75, 6);

    glVertex2f(21.5, 6);



    glVertex2f(22.15, 6.15);

    glVertex2f(22.4, 6.15);

    glVertex2f(22.4, 6);

    glVertex2f(22.15, 6);

    glEnd();

    Update_Fixed_Human();



}



void line()

{

    glBegin(GL_LINES);

    glColor3f(1.0f, 1.0f, 0.0f);

    // line between 2 humna communication;

    for (float i = 12.0; i < 13.7f; i = i + .2)

    {

        glVertex2f(i, 7.4);//draw line here

        glVertex2f(i + .1, 7.4);

    }

    glEnd();

}

void line2()

{

    glLineWidth(3.5);

    glBegin(GL_LINES);

    glColor3f(1.0f, 0.0f, 0.0f);

    float x1 = 5.5, y1 = 7.15, x2 = 2, y2 = 18;

    while (x2 < x1 && y2 > y1)

    {

        glVertex2f(x1, y1);//draw line here

        glVertex2f(x1 - .05, y1 + .05);

        x1 -= .048;

        y1 += .15;

    }

    float xA1 = 2, yA1 = 18, xA2 = 10.8, yA2 = 18.5;

    while (xA2 > xA1 && yA2 > yA1)

    {

        glVertex2f(xA1, yA1);//draw line here

        glVertex2f(xA1 + .05, yA1 + .05);

        xA1 += .1;

        yA1 += .0034;

    }



    float xa1 = 10.8, ya1 = 18.5, xa2 = 19.5, ya2 = 17.0;

    while (xa2 > xa1 && ya2 < ya1)

    {

        glVertex2f(xa1, ya1);//draw line here

        glVertex2f(xa1 + .05, ya1 - .05);

        xa1 += .142;

        ya1 -= .025;

    }

    float xb1 = 19.5, yb1 = 17, xb2 = 20.4, yb2 = 7.15;

    while (xb2 > xb1 && yb2 < yb1)

    {

        glVertex2f(xb1, yb1);//draw line here

        glVertex2f(xb1 + .05, yb1 - .05);

        xb1 += .0152;

        yb1 -= .18;

    }

    glEnd();

    glLineWidth(1);

}

void Human_Combo_Night()

{





    //hUMAN2

    //hEAD



    glColor3f(1.0f, 1.0f, 1.0f);

    circle(0.195, 0.195, 4.955, 7.6);



    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(4.9, 7.4);//draw line here

    glVertex2f(5, 7.4);

    glVertex2f(5, 7.28);

    glVertex2f(4.9, 7.28);



    glVertex2f(4.75, 7.28);

    glVertex2f(5.15, 7.28);

    glVertex2f(5.15, 6.9);

    glVertex2f(4.75, 6.9);



    glVertex2f(4.8, 6.9);

    glVertex2f(4.93, 6.9);

    glVertex2f(4.93, 6.3);

    glVertex2f(4.8, 6.3);



    glVertex2f(4.98, 6.9);

    glVertex2f(5.1, 6.9);

    glVertex2f(5.1, 6.3);

    glVertex2f(4.98, 6.3);



    glVertex2f(4.5, 7.15);

    glVertex2f(4.75, 7.15);

    glVertex2f(4.75, 7);

    glVertex2f(4.5, 7);



    glVertex2f(5.15, 7.15);

    glVertex2f(5.4, 7.15);

    glVertex2f(5.4, 7);

    glVertex2f(5.15, 7);



    glVertex2f(5.4, 7);

    glVertex2f(5.5, 7);

    glVertex2f(5.5, 7.3);

    glVertex2f(5.4, 7.3);



    glEnd();



    //human 4



      //head



    glColor3f(1.0f, 1.0f, 1.0f);

    circle(0.195, 0.195, 20.955, 7.6);

    circle(0.15, 0.15, 20.955, 7.6);



    glBegin(GL_QUADS);



    glVertex2f(20.9, 7.4);

    glVertex2f(21, 7.4); // draw line here

    glVertex2f(21, 7.28);

    glVertex2f(20.9, 7.28);



    glVertex2f(20.75, 7.28);

    glVertex2f(21.15, 7.28);

    glVertex2f(21.15, 6.9);

    glVertex2f(20.75, 6.9);



    glVertex2f(20.8, 6.9);

    glVertex2f(20.93, 6.9);

    glVertex2f(20.93, 6.3);

    glVertex2f(20.8, 6.3);



    glVertex2f(20.98, 6.9);

    glVertex2f(21.1, 6.9);

    glVertex2f(21.1, 6.3);

    glVertex2f(20.98, 6.3);



    glVertex2f(20.5, 7.15);

    glVertex2f(20.75, 7.15);

    glVertex2f(20.75, 7);

    glVertex2f(20.5, 7);



    glVertex2f(21.15, 7.15);

    glVertex2f(21.4, 7.15);

    glVertex2f(21.4, 7);

    glVertex2f(21.15, 7);



    glVertex2f(20.4, 7);

    glVertex2f(20.5, 7);

    glVertex2f(20.5, 7.3);

    glVertex2f(20.4, 7.3);



    glEnd();

    line2();

}

void Human_Combo()

{





    //hUMAN2

    //hEAD



    glColor3f(1.0f, 1.0f, 1.0f);

    circle(0.195, 0.195, 13.955, 7.6);

    circle(0.15, 0.15, 13.955, 7.6);







    glBegin(GL_QUADS);

    glColor3f(0.8f, 0.8f, 0.8f);

    glVertex2f(13.9, 7.4);//draw line here

    glVertex2f(14, 7.4);

    glVertex2f(14, 7.28);

    glVertex2f(13.9, 7.28);



    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(13.75, 7.28);

    glVertex2f(14.15, 7.28);

    glVertex2f(14.15, 6.9);

    glVertex2f(13.75, 6.9);



    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(13.8, 6.9);

    glVertex2f(13.93, 6.9);

    glVertex2f(13.93, 6.3);

    glVertex2f(13.8, 6.3);



    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(13.98, 6.9);

    glVertex2f(14.1, 6.9);

    glVertex2f(14.1, 6.3);

    glVertex2f(13.98, 6.3);



    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(13.5, 7.15);

    glVertex2f(13.75, 7.15);

    glVertex2f(13.75, 7);

    glVertex2f(13.5, 7);



    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(14.15, 7.15);

    glVertex2f(14.4, 7.15);

    glVertex2f(14.4, 7);

    glVertex2f(14.15, 7);



    glEnd();



    //human 4



      //head



    glColor3f(0.8f, 0.8f, 0.8f);

    circle(0.195, 0.195, 11.955, 7.6);

    circle(0.15, 0.15, 11.955, 7.6);



    glBegin(GL_QUADS);

    glColor3f(0.8f, 0.8f, 0.8f);

    glVertex2f(11.9, 7.4);

    glVertex2f(12, 7.4); // draw line here

    glVertex2f(12, 7.28);

    glVertex2f(11.9, 7.28);



    glEnd();



    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(11.75, 7.28);

    glVertex2f(12.15, 7.28);

    glVertex2f(12.15, 6.9);

    glVertex2f(11.75, 6.9);



    glEnd();

    //leg1

    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(11.8, 6.9);

    glVertex2f(11.93, 6.9);

    glVertex2f(11.93, 6.3);

    glVertex2f(11.8, 6.3);



    glEnd();

    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(11.98, 6.9);

    glVertex2f(12.1, 6.9);

    glVertex2f(12.1, 6.3);

    glVertex2f(11.98, 6.3);



    glEnd();



    //hand1



    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(11.5, 7.15);

    glVertex2f(11.75, 7.15);

    glVertex2f(11.75, 7);

    glVertex2f(11.5, 7);



    glEnd();



    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(12.15, 7.15);

    glVertex2f(12.4, 7.15);

    glVertex2f(12.4, 7);

    glVertex2f(12.15, 7);



    glEnd();

}

void Moon()

{

    glTranslatef(MoonN, 0, 0);

    glColor3f(1.0, 1.0, 1.0);

    circle(1, 1, 20, 18);

    glColor3f(0.0, 0.0, 0.2);

    circle(1, 1, 19.5, 18);

   // Moon_Update();

}



void sun()

{

    glTranslatef(sunn, 0, 0);



    glColor3f(255, 255, 0);

    circle(1, 1, 6.05, 16.5);

    Update_sun();

}

void cloud()

{

    glTranslatef(d, 0, 0);



    glColor3f(255, 255, 255);

    circle(1.0f, 1.0f, 11.0f, 17.5f);

    circle(1.0f, 1.0f, 12.2f, 18.0f);

    circle(1.0f, 1.0f, 13.5f, 18.0f);

    circle(1.0f, 1.0f, 12.70f, 17.4f);

    Update_cloud();



    glTranslatef(d2, 0, 0);

    glColor3f(255, 255, 235);

    circle(1.0f, 1.0f, 2.50f, 16.5f);

    circle(1.0f, 1.0f, 3.5f, 17.0f);

    circle(1.0f, 1.0f, 4.9f, 16.9f);

    circle(1.0f, 1.0f, 4.2f, 16.4f);

    Update_cloud2();





}

void CarFunction_2()

{

    glTranslatef(-y, 0, 0);// means the drowing object will be on the x axis



    glColor3ub(255, 255, 00);

    glBegin(GL_QUADS);

    glVertex2d(19.2f, 1.1f);

    glVertex2d(22.0f, 1.1f);

    glVertex2d(22.0f, 2.1f);

    glVertex2d(19.2, 2.1f);

    glEnd();



    glColor3ub(255, 197, 21);

    glBegin(GL_POLYGON);

    glVertex2d(21.4f, 2.1f);

    glVertex2d(19.8f, 2.1f);

    glVertex2d(19.8f, 2.9f);

    glVertex2d(19.7f, 3.0f);

    glVertex2d(21.3f, 3.0f);

    glVertex2d(21.4f, 2.9f);



    glEnd();



    // car wheel

    glColor3ub(0, 255, 0);//outside the ring

    circle(.28f, .28f, 21.5f, 1.0f);

    circle(.28f, .25f, 19.8f, 1.0f);



    glColor3ub(245, 245, 245);//  Ring

    circle(.21f, .21f, 21.5f, 1.0f);

    circle(.21f, .21f, 19.8f, 1.0f);



    glColor3ub(61, 38, 113);

    glBegin(GL_QUADS);

    glVertex2d(20.7f, 2.3f);

    glVertex2d(21.2f, 2.3f);

    glVertex2d(21.2f, 2.8f);

    glVertex2d(20.7f, 2.8f);

    glEnd();



    glColor3ub(61, 38, 113);

    glBegin(GL_QUADS);

    glVertex2d(20.0f, 2.3f);

    glVertex2d(20.6f, 2.3f);

    glVertex2d(20.6f, 2.8f);

    glVertex2d(20.0f, 2.8f);

    glEnd();

    Update_2();

}

void CarFunction_1()

{

    glTranslatef(x, 0, 0);// means the drowing object will be on the x axis



    glColor3ub(243, 106, 033);

    glBegin(GL_QUADS);

    glVertex2d(0.0f, 3.8f);

    glVertex2d(2.8f, 3.8f);

    glVertex2d(2.8f, 4.3f);

    glVertex2d(0.0, 4.3f);

    glEnd();



    glColor3ub(255, 0, 0);

    glBegin(GL_QUADS);

    glVertex2d(0.4f, 4.3f);

    glVertex2d(1.9f, 4.3f);

    glVertex2d(1.9f, 4.8f);

    glVertex2d(0.4f, 4.8);

    glEnd();



    // car wheel

    glColor3ub(0, 255, 0);//outside the ring

    circle(.28f, .28f, .5f, 3.8f);

    circle(.28f, .25f, 1.8f, 3.8f);



    glColor3ub(245, 245, 245);//  Ring

    circle(.21f, .21f, .5f, 3.8f);

    circle(.21f, .21f, 1.8f, 3.8f);



    glColor3ub(61, 38, 113);

    glBegin(GL_QUADS);

    glVertex2d(0.5f, 4.4f);

    glVertex2d(1.0f, 4.4f);

    glVertex2d(1.0f, 4.7f);

    glVertex2d(0.5f, 4.7f);

    glEnd();



    glColor3ub(61, 38, 113);

    glBegin(GL_QUADS);

    glVertex2d(1.2f, 4.4f);

    glVertex2d(1.7f, 4.4f);

    glVertex2d(1.7f, 4.7f);

    glVertex2d(1.2f, 4.7f);

    glEnd();

    Update_1();

}



void CarFunction_3()

{

    glTranslatef(x1, 0, 0);// means the drowing object will be on the x axis



    glColor3ub(243, 106, 033);

    glBegin(GL_QUADS);

    glVertex2d(0.0f, 4.8f);

    glVertex2d(4.0f, 4.8f);

    glVertex2d(4.0f, 5.2f);

    glVertex2d(0.0, 5.2f);

    glEnd();



    glColor3ub(255, 0, 0);

    glBegin(GL_POLYGON);

    glVertex2d(0.0f, 5.2f);

    glVertex2d(4.0f, 5.2f);

    glVertex2d(4.0f, 6.3f);

    glVertex2d(3.9f, 6.4f);

    glVertex2d(0.1f, 6.4f);

    glVertex2d(0.0f, 6.3f);

    glEnd();



    // car wheel

    glColor3ub(0, 255, 0);//outside the ring

    circle(.28f, .28f, .5f, 4.8f);

    circle(.28f, .25f, 1.8f, 4.8f);

    circle(.28f, .25f, 3.1f, 4.8f);



    glColor3ub(245, 245, 245);//  Ring

    circle(.21f, .21f, .5f, 4.8f);

    circle(.21f, .21f, 1.8f, 4.8f);

    circle(.21f, .21f, 3.1f, 4.8f);



    glColor3ub(61, 38, 113);

    glBegin(GL_QUADS);



    glVertex2d(0.5f, 5.8f);

    glVertex2d(1.0f, 5.8f);

    glVertex2d(1.0f, 6.1f);

    glVertex2d(0.5f, 6.1f);



    glVertex2d(1.1f, 5.8f);

    glVertex2d(1.6f, 5.8f);

    glVertex2d(1.6f, 6.1f);

    glVertex2d(1.1f, 6.1f);



    glVertex2d(1.7f, 5.8f);

    glVertex2d(2.2f, 5.8f);

    glVertex2d(2.2f, 6.1f);

    glVertex2d(1.7f, 6.1f);



    glVertex2d(2.3f, 5.8f);

    glVertex2d(2.8f, 5.8f);

    glVertex2d(2.8f, 6.1f);

    glVertex2d(2.3f, 6.1f);



    glVertex2d(2.95f, 5.5f);

    glVertex2d(3.1f, 5.5f);

    glVertex2d(3.1f, 6.1f);

    glVertex2d(2.96f, 6.1f);



    glVertex2d(3.2f, 5.8f);

    glVertex2d(3.9f, 5.8f);

    glVertex2d(3.9f, 6.1f);

    glVertex2d(3.2f, 6.1f);



    glEnd();

    Update_3();

}

void init() {

    glClearColor(0.7, 0.7, 1.0, 1.0); // Initial background color (day mode)

    gluOrtho2D(0, 23, 0, 20);

}

//---------------

void Tree()

{



    glBegin(GL_QUADS);

    glColor3ub(136, 0, 21);

    glVertex2d(2.0f, 7.9f);

    glVertex2d(2.5f, 7.9f);

    glVertex2d(2.5f, 9.7f);

    glVertex2d(2.0f, 9.7f);

    glEnd();



    glColor3ub(0, 255, 0);

    circle(1.0f, 1.0f, 1.6f, 10.1f);

    circle(1.0f, 1.0f, 2.95f, 10.5f);

    circle(1.0f, 1.0f, 2.1f, 11.5f);



    glBegin(GL_QUADS);

    glColor3ub(136, 0, 21);

    glVertex2d(8.5f, 6.9f);

    glVertex2d(9.0f, 6.9f);

    glVertex2d(9.0f, 8.7f);

    glVertex2d(8.5f, 8.7f);

    glEnd();



    glColor3ub(0, 255, 0);

    circle(1.0f, 1.0f, 9.0f, 9.5f);

    circle(1.0f, 1.0f, 9.7f, 10.7f);

    circle(1.0f, 1.0f, 7.60f, 9.2f);

    circle(1.0f, 1.0f, 8.60f, 10.9f);

}



void mobile_tower()

{



    glLineWidth(7);

    glBegin(GL_LINES);

    glLineWidth(7.9);

    glColor3f(112, 112, 112);

    glVertex2f(18.5, 14);

    glVertex2f(19.5, 17);



    glVertex2f(19.5, 17);

    glVertex2f(20.5, 14);



    glVertex2f(19.5, 17);

    glVertex2f(19.5, 14);



    glVertex2f(19.97, 15.5);

    glVertex2f(19.05, 15.5);



    glVertex2f(20.3, 14.7);

    glVertex2f(18.7, 14.7);

    //--------------------

    glVertex2f(1, 15.05);

    glVertex2f(2, 18);



    glVertex2f(2, 18);

    glVertex2f(3.0, 15.05);



    glVertex2f(2, 18);

    glVertex2f(2, 15.05);



    glVertex2f(1.5, 16.5);

    glVertex2f(2.5, 16.5);



    glVertex2f(1.25, 15.8);

    glVertex2f(2.75, 15.8);



    glEnd();

    glColor3f(255, 0, 0);

    circle(.2f, .2f, 2.0f, 18.0f);

    circle(.2f, .2f, 19.5f, 17.0f);

}



void Last_7_Building()

{

    glColor3ub(61, 38, 133);



    glBegin(GL_QUADS);

    glVertex2d(18.0f, 9.0f);

    glVertex2d(21.1f, 9.0f);

    glVertex2d(21.1f, 14.0f);

    glVertex2d(18.0f, 14.0f);



    glColor3ub(0, 0, 0);

    glVertex2d(21.1f, 9.0f);

    glVertex2d(21.90f, 9.0f);

    glVertex2d(21.90f, 12.0f);

    glVertex2d(21.1f, 12.0f);



    glColor3ub(61, 38, 133);

    glVertex2d(21.9f, 9.0f);

    glVertex2d(23.0f, 9.0f);

    glVertex2d(23.0f, 12.0f);

    glVertex2d(21.9f, 12.0f);



    glColor3ub(243, 106, 33);

    glVertex2d(17.0f, 9.0f);

    glVertex2d(18.0f, 9.0f);

    glVertex2d(18.0f, 13.0f);

    glVertex2d(17.0f, 13.f);



    glColor3ub(24, 124, 71);

    glVertex2d(12.3f, 9.0f);

    glVertex2d(14.1f, 9.0f);

    glVertex2d(14.1f, 14.1f);

    glVertex2d(12.3f, 14.1f);





    glColor3ub(6, 242, 249);

    glVertex2d(10.0f, 9.0f);

    glVertex2d(12.3f, 9.0f);

    glVertex2d(12.3f, 15.4f);

    glVertex2d(10.0f, 15.4f);

    // window--------------------

    glColor3ub(243, 106, 33);

    glVertex2d(18.5f, 9.9f);

    glVertex2d(19.1f, 9.9f);

    glVertex2d(19.1f, 10.6f);

    glVertex2d(18.5f, 10.6f);



    glColor3ub(243, 106, 33);

    glVertex2d(20.1f, 9.9f);

    glVertex2d(20.8f, 9.9f);

    glVertex2d(20.8f, 10.6f);

    glVertex2d(20.1f, 10.6f);



    //-----------------

    glColor3ub(243, 106, 33);

    glVertex2d(18.5f, 11.09f);

    glVertex2d(19.1f, 11.09f);

    glVertex2d(19.1f, 11.9f);

    glVertex2d(18.5f, 11.9f);



    glColor3ub(243, 106, 33);

    glVertex2d(20.1f, 11.09f);

    glVertex2d(20.8f, 11.09f);

    glVertex2d(20.8f, 11.9f);

    glVertex2d(20.1f, 11.9f);



    //----------------------

    glColor3ub(243, 106, 33);

    glVertex2d(18.5f, 12.3f);

    glVertex2d(19.1f, 12.3f);

    glVertex2d(19.1f, 13.05f);

    glVertex2d(18.5f, 13.05f);



    glColor3ub(243, 106, 33);

    glVertex2d(20.1f, 12.3f);

    glVertex2d(20.8f, 12.3f);

    glVertex2d(20.8f, 13.05f);

    glVertex2d(20.1f, 13.05f);

    //--------------------------------

    //--------------------------------

    glColor3ub(240, 155, 31);

    glVertex2d(22.1f, 9.2f);

    glVertex2d(22.6f, 9.2f);

    glVertex2d(22.6f, 10.0f);

    glVertex2d(22.1f, 10.0f);



    glVertex2d(22.1f, 10.2f);

    glVertex2d(22.6f, 10.2f);

    glVertex2d(22.6f, 10.9f);

    glVertex2d(22.1f, 10.9f);



    glVertex2d(22.1f, 11.1f);

    glVertex2d(22.6f, 11.1f);

    glVertex2d(22.6f, 11.8f);

    glVertex2d(22.1f, 11.8f);



    //----------------------------

    glColor3ub(255, 255, 0);

    glVertex2d(17.0f, 9.3f);

    glVertex2d(18.0f, 9.3f);

    glVertex2d(18.0f, 10.0f);

    glVertex2d(17.0f, 10.f);



    glVertex2d(17.0f, 10.5f);

    glVertex2d(18.0f, 10.5f);

    glVertex2d(18.0f, 11.5f);

    glVertex2d(17.0f, 11.5f);



    glVertex2d(17.0f, 11.9f);

    glVertex2d(18.0f, 11.9f);

    glVertex2d(18.0f, 12.5f);

    glVertex2d(17.0f, 12.5f);



    glColor3ub(111, 198, 155);

    glVertex2d(13.0f, 9.0f);

    glVertex2d(17.9f, 9.0f);

    glVertex2d(17.9f, 10.5f);

    glVertex2d(13.0f, 10.5f);



    glColor3ub(82, 138, 163);

    glVertex2d(13.2f, 10.5f);

    glVertex2d(17.5f, 10.5f);

    glVertex2d(17.5f, 11.5f);

    glVertex2d(13.2f, 11.5f);

    //----------------------



    glColor3ub(75, 75, 175);

    glVertex2d(16.45f, 9.25f);

    glVertex2d(17.2f, 9.25f);

    glVertex2d(17.2f, 10.0f);

    glVertex2d(16.45f, 10.0f);



    glVertex2d(15.0f, 9.25f);

    glVertex2d(15.85f, 9.25f);

    glVertex2d(15.85f, 10.0f);

    glVertex2d(15.0f, 10.0f);



    glVertex2d(13.5f, 9.25f);

    glVertex2d(14.3f, 9.25f);

    glVertex2d(14.3f, 10.0f);

    glVertex2d(13.5f, 10.0f);



    //----------------------------

    glColor3ub(209, 140, 71);

    glVertex2d(16.5f, 10.6f);

    glVertex2d(17.0f, 10.6f);

    glVertex2d(17.0f, 11.2f);

    glVertex2d(16.5f, 11.2f);



    glVertex2d(15.6f, 10.6f);

    glVertex2d(16.2f, 10.6f);

    glVertex2d(16.2f, 11.2f);

    glVertex2d(15.6f, 11.2f);



    glVertex2d(14.5f, 10.6f);

    glVertex2d(15.1f, 10.6f);

    glVertex2d(15.1f, 11.2f);

    glVertex2d(14.5f, 11.2f);



    glVertex2d(13.6f, 10.6f);

    glVertex2d(14.20f, 10.6f);

    glVertex2d(14.20f, 11.2f);

    glVertex2d(13.6f, 11.2f);

    //---------------------------------



    glColor3ub(226, 212, 252);

    glVertex2d(12.95f, 13.0f);

    glVertex2d(13.5f, 13.0f);

    glVertex2d(13.5f, 13.7f);

    glVertex2d(12.95f, 13.7f);



    glVertex2d(12.95f, 11.8f);

    glVertex2d(13.5f, 11.8f);

    glVertex2d(13.5f, 12.5f);

    glVertex2d(12.95f, 12.5f);

    //-----------------------------------

    glColor3ub(244, 184, 200);

    glVertex2d(10.9f, 10.10f);

    glVertex2d(11.6f, 10.10f);

    glVertex2d(11.6f, 11.0f);

    glVertex2d(10.9f, 11.0f);



    glVertex2d(10.9f, 11.50f);

    glVertex2d(11.6f, 11.50f);

    glVertex2d(11.6f, 12.50f);

    glVertex2d(10.9f, 12.50f);



    glVertex2d(10.9f, 13.0f);

    glVertex2d(11.6f, 13.0f);

    glVertex2d(11.6f, 13.90f);

    glVertex2d(10.9f, 13.90f);



    glVertex2d(10.9f, 14.30f);

    glVertex2d(11.6f, 14.30f);

    glVertex2d(11.6f, 15.20f);

    glVertex2d(10.9f, 15.20f);



    glEnd();

    mobile_tower();

    glLineWidth(1);

}



//---------------

void stars()

{

    glVertex2i(18, 18);

    glVertex2i(17, 15);

    glVertex2i(16, 19);

    glVertex2i(15, 17);

    glVertex2i(14, 17);

    glVertex2i(13, 19);



    glVertex2i(20, 18);

    glVertex2i(21, 15);

    glVertex2i(22, 19);

    glVertex2i(20.5, 17);

    glVertex2i(21.5, 17);

    glVertex2i(22.5, 19);



    ///

    glVertex2i(10, 18);



    glVertex2i(1, 18);

    glVertex2i(3, 19);





    glVertex2i(8, 17);

    glVertex2i(9, 17);



    glVertex2i(12, 18);



    glVertex2i(5, 17);

    glVertex2i(4, 16);



    glVertex2i(8, 18);

    glVertex2i(6, 19);

}
/*float airplaneX = 0;
float airplaneY = 0;

void drawAirplane() {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 2);
    glVertex2f(-1, 2);
    glEnd();
}

void updateAirplane() {
    airplaneX += 0.1;
    if (airplaneX > 23) {
        airplaneX = 0;
    }
}

void timer(int value) {
    updateAirplane();
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0);
}


   // Add this line to declare airplaneX
     // Airplane
        glPushMatrix();
        glTranslatef(airplaneX, airplaneY, 0);
        drawAirplane();
        glPopMatrix();

*/
// Function to draw lightning
void drawLightning() {
    glColor3f(1.0, 1.0, 0.0); // Yellow color for lightning
    glBegin(GL_LINES);
    // Draw a lightning bolt
    glVertex2f(10.0, 20.0);
    glVertex2f(15.0, 25.0);
    glEnd();
}


void display() {

    glClear(GL_COLOR_BUFFER_BIT);





    if (isDay) {





        //Road

        glBegin(GL_QUADS);

        glColor3f(0.4f, 0.4f, 0.4f);

        glVertex2f(0, 0);

        glVertex2f(23, 0);

        glVertex2f(23, 5);

        glVertex2f(0, 5);

        glEnd();



        //road box

        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(0, 2.3);

        glVertex2f(2, 2.3);

        glVertex2f(2, 2.8);

        glVertex2f(0, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(3, 2.3);

        glVertex2f(5, 2.3);

        glVertex2f(5, 2.8);

        glVertex2f(3, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(6, 2.3);

        glVertex2f(8, 2.3);

        glVertex2f(8, 2.8);

        glVertex2f(6, 2.8);

        glEnd();

        // middle

        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 2.3);

        glVertex2f(11, 2.3);

        glVertex2f(11, 2.8);

        glVertex2f(9, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(12, 2.3);

        glVertex2f(14, 2.3);

        glVertex2f(14, 2.8);

        glVertex2f(12, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(15, 2.3);

        glVertex2f(17, 2.3);

        glVertex2f(17, 2.8);

        glVertex2f(15, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(18, 2.3);

        glVertex2f(20, 2.3);

        glVertex2f(20, 2.8);

        glVertex2f(18, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(20.5, 2.3);

        glVertex2f(23, 2.3);

        glVertex2f(23, 2.8);

        glVertex2f(20.5, 2.8);

        glEnd();

        //crossing



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 3.0);

        glVertex2f(11, 3.0);

        glVertex2f(11, 3.5);

        glVertex2f(9, 3.5);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 3.7);

        glVertex2f(11, 3.7);

        glVertex2f(11, 4.2);

        glVertex2f(9, 4.2);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 4.4);

        glVertex2f(11, 4.4);

        glVertex2f(11, 4.9);

        glVertex2f(9, 4.9);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 1.6);

        glVertex2f(11, 1.6);

        glVertex2f(11, 2.1);

        glVertex2f(9, 2.1);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 0.9);

        glVertex2f(11, 0.9);

        glVertex2f(11, 1.4);

        glVertex2f(9, 1.4);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 0.2);

        glVertex2f(11, 0.2);

        glVertex2f(11, 0.7);

        glVertex2f(9, 0.7);

        glEnd();



        //Feild



        glBegin(GL_QUADS);



        glColor3f(0.0f, 0.2f, 0.0f);

        glVertex2f(0, 5);

        glVertex2f(23, 5);

        glVertex2f(23, 9);

        glVertex2f(0, 9);

        glColor3f(0.0f, 0.5f, 0.0f);

        glVertex2f(0, 6);

        glVertex2f(23, 6);

        glVertex2f(23, 9);

        glVertex2f(0, 9);





        glEnd();



        //building 1





        glBegin(GL_QUADS);

        glColor3f(0.0f, 0.0f, 1.0f);

        glVertex2f(0, 9);

        glVertex2f(5, 9);

        glVertex2f(5, 15);

        glVertex2f(0, 15);

        glEnd();



        //line

        glBegin(GL_LINES);

        glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(2.5, 12);

        glVertex2f(2.5, 14.5);



        glVertex2f(2.5, 14.5);

        glVertex2f(5, 14.5);



        glVertex2f(2, 12);

        glVertex2f(2, 14.8);



        glVertex2f(2, 14.8);

        glVertex2f(0, 14.8);



        //border line

        glVertex2f(0, 9);

        glVertex2f(5, 9);



        glVertex2f(5, 9);

        glVertex2f(5, 15);



        glVertex2f(5, 15);

        glVertex2f(0, 15);



        glVertex2f(0, 9);

        glVertex2f(0, 15);

        glEnd();



        //WINDOW

        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(0.6, 14.4);

        glVertex2f(1.5, 14.4);

        glVertex2f(1.5, 13.5);

        glVertex2f(0.6, 13.5);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(0.6, 13);

        glVertex2f(1.5, 13);

        glVertex2f(1.5, 12.1);

        glVertex2f(0.6, 12.1);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(0.6, 11.6);

        glVertex2f(1.5, 11.6);

        glVertex2f(1.5, 10.7);

        glVertex2f(0.6, 10.7);

        glEnd();

        //2

        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(3, 14.4);

        glVertex2f(3.9, 14.4);

        glVertex2f(3.9, 13.5);

        glVertex2f(3, 13.5);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(3, 13);

        glVertex2f(3.9, 13);

        glVertex2f(3.9, 12.1);

        glVertex2f(3, 12.1);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(3, 11.6);

        glVertex2f(3.9, 11.6);

        glVertex2f(3.9, 10.7);

        glVertex2f(3, 10.7);

        glEnd();



        //Bulding 2 white



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(4.4, 9);

        glVertex2f(6.4, 9);

        glVertex2f(6.4, 13.8);

        glVertex2f(4.4, 13.8);

        glEnd();



        glBegin(GL_LINES);

        glColor3ub(243, 106, 33);



        glVertex2f(4.4, 9);

        glVertex2f(6.4, 9);



        glVertex2f(6.4, 9);

        glVertex2f(6.4, 13.8);



        glVertex2f(4.4, 13.8);

        glVertex2f(6.4, 13.8);



        glVertex2f(4.4, 13.8);

        glVertex2f(4.4, 9);



        glVertex2f(4.8, 13.8);

        glVertex2f(4.8, 9);



        glVertex2f(5.2, 13.8);

        glVertex2f(5.2, 9);



        glVertex2f(5.6, 13.8);

        glVertex2f(5.6, 9);



        glVertex2f(6, 13.8);

        glVertex2f(6., 9);



        glEnd();



        //BULDING 3



        glBegin(GL_QUADS);

        glColor3ub(0, 0, 150);

        glVertex2f(8.5, 9);

        glVertex2f(10, 9);

        glVertex2f(10, 14.5);

        glVertex2f(8.5, 14.5);

        glEnd();

        //WINDOW

        glBegin(GL_QUADS);

        glColor3ub(243, 106, 33);

        glVertex2f(8.7, 12.1);

        glVertex2f(9.2, 12.1);

        glVertex2f(9.2, 12.8);

        glVertex2f(8.7, 12.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3ub(243, 106, 33);

        glVertex2f(8.7, 13.5);

        glVertex2f(9.2, 13.5);

        glVertex2f(9.2, 14.1);

        glVertex2f(8.7, 14.1);

        glEnd();





        //black building with 1 window

        glBegin(GL_QUADS);

        glColor3f(0.1f, 0.1f, 0.1f);

        glVertex2f(6.4, 9);

        glVertex2f(9, 9);

        glVertex2f(9, 11);

        glVertex2f(6.4, 11);

        glEnd();



        //window

        glBegin(GL_QUADS);

        glColor3ub(243, 106, 33);

        glVertex2f(6.6, 9.2);

        glVertex2f(7, 9.2);

        glVertex2f(7, 9.6);

        glVertex2f(6.6, 9.6);

        glEnd();



        // 2 traingle



        glBegin(GL_TRIANGLES);

        glColor3ub(0, 233, 0);



        glVertex2f(6.4, 11);

        glVertex2f(9, 11.6);

        glVertex2f(9, 11);



        glEnd();



        glBegin(GL_TRIANGLES);

        glColor3ub(243, 106, 33);

        glVertex2f(6.4, 11.7);

        glVertex2f(6.4, 11);

        glVertex2f(8, 11.3);



        glEnd();

        //BORDER LINE DITE HOBE

        Last_7_Building();

        Tree();

        Bench();

        LampPosts();

        Human_Combo();



        /*

               //extra

               circle(50, 600, 500, 200, 200, 0);



               circle(30, 250, 550, 255, 150, 34);

               circle(30, 270, 550, 255, 150, 34);

               circle(30, 270, 530, 255, 150, 34);



               circle(30, 350, 550, 255, 150, 34);

               circle(30, 370, 550, 255, 150, 34);

               circle(30, 370, 530, 255, 150, 34);



               circle(30, 150, 550, 255, 150, 34);

               circle(30, 170, 550, 255, 150, 34);

               circle(30, 170, 530, 255, 150, 34);*/

        glPushMatrix();

        CarFunction_1();

        glPopMatrix();



        glPushMatrix();

        CarFunction_3();

        glPopMatrix();



        glPushMatrix();

        CarFunction_2();

        glPopMatrix();



        glPushMatrix();

        cloud();

        glPopMatrix();



        glPushMatrix();

        sun();

        glPopMatrix();



        line();

        glutPostRedisplay();

    }


    else {



        glPushMatrix();

        Moon();

        glPopMatrix();

        stars();



        glColor3f(1.0, 1.0, 1.0);

        glBegin(GL_POLYGON);

        glVertex2i(700, 500);



        glEnd();

        //Road

        glBegin(GL_QUADS);

        glColor3f(0.4f, 0.4f, 0.4f);

        glVertex2f(0, 0);

        glVertex2f(23, 0);

        glVertex2f(23, 5);

        glVertex2f(0, 5);

        glEnd();



        //road box

        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(0, 2.3);

        glVertex2f(2, 2.3);

        glVertex2f(2, 2.8);

        glVertex2f(0, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(3, 2.3);

        glVertex2f(5, 2.3);

        glVertex2f(5, 2.8);

        glVertex2f(3, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(6, 2.3);

        glVertex2f(8, 2.3);

        glVertex2f(8, 2.8);

        glVertex2f(6, 2.8);

        glEnd();

        // middle

        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 2.3);

        glVertex2f(11, 2.3);

        glVertex2f(11, 2.8);

        glVertex2f(9, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(12, 2.3);

        glVertex2f(14, 2.3);

        glVertex2f(14, 2.8);

        glVertex2f(12, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(15, 2.3);

        glVertex2f(17, 2.3);

        glVertex2f(17, 2.8);

        glVertex2f(15, 2.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(18, 2.3);

        glVertex2f(20, 2.3);

        glVertex2f(20, 2.8);

        glVertex2f(18, 2.8);

        glEnd();

        //crossing



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 3.0);

        glVertex2f(11, 3.0);

        glVertex2f(11, 3.5);

        glVertex2f(9, 3.5);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 3.7);

        glVertex2f(11, 3.7);

        glVertex2f(11, 4.2);

        glVertex2f(9, 4.2);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 4.4);

        glVertex2f(11, 4.4);

        glVertex2f(11, 4.9);

        glVertex2f(9, 4.9);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 1.6);

        glVertex2f(11, 1.6);

        glVertex2f(11, 2.1);

        glVertex2f(9, 2.1);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 0.9);

        glVertex2f(11, 0.9);

        glVertex2f(11, 1.4);

        glVertex2f(9, 1.4);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(9, 0.2);

        glVertex2f(11, 0.2);

        glVertex2f(11, 0.7);

        glVertex2f(9, 0.7);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(20.5, 2.3);

        glVertex2f(23, 2.3);

        glVertex2f(23, 2.8);

        glVertex2f(20.5, 2.8);

        glEnd();



        //Feild



        glBegin(GL_QUADS);



        glColor3f(0.0f, 0.2f, 0.0f);

        glVertex2f(0, 5);

        glVertex2f(23, 5);

        glVertex2f(23, 9);

        glVertex2f(0, 9);

        glColor3f(0.0f, 0.5f, 0.0f);

        glVertex2f(0, 6);

        glVertex2f(23, 6);

        glVertex2f(23, 9);

        glVertex2f(0, 9);



        //building 1





        glBegin(GL_QUADS);

        glColor3f(0.0f, 0.0f, 1.0f);

        glVertex2f(0, 9);

        glVertex2f(5, 9);

        glVertex2f(5, 15);

        glVertex2f(0, 15);

        glEnd();



        //line

        glBegin(GL_LINES);

        glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(2.5, 12);

        glVertex2f(2.5, 14.5);



        glVertex2f(2.5, 14.5);

        glVertex2f(5, 14.5);



        glVertex2f(2, 12);

        glVertex2f(2, 14.8);



        glVertex2f(2, 14.8);

        glVertex2f(0, 14.8);

        glEnd();



        //WINDOW

        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(0.6, 14.4);

        glVertex2f(1.5, 14.4);

        glVertex2f(1.5, 13.5);

        glVertex2f(0.6, 13.5);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(0.6, 13);

        glVertex2f(1.5, 13);

        glVertex2f(1.5, 12.1);

        glVertex2f(0.6, 12.1);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(0.6, 11.6);

        glVertex2f(1.5, 11.6);

        glVertex2f(1.5, 10.7);

        glVertex2f(0.6, 10.7);

        glEnd();

        //2

        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(3, 14.4);

        glVertex2f(3.9, 14.4);

        glVertex2f(3.9, 13.5);

        glVertex2f(3, 13.5);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(3, 13);

        glVertex2f(3.9, 13);

        glVertex2f(3.9, 12.1);

        glVertex2f(3, 12.1);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(0.8f, 0.8f, 0.0f);

        glVertex2f(3, 11.6);

        glVertex2f(3.9, 11.6);

        glVertex2f(3.9, 10.7);

        glVertex2f(3, 10.7);

        glEnd();



        glBegin(GL_QUADS);

        glColor3f(1.0f, 1.0f, 1.0f);

        glVertex2f(4.4, 9);

        glVertex2f(6.4, 9);

        glVertex2f(6.4, 13.8);

        glVertex2f(4.4, 13.8);

        glEnd();



        glBegin(GL_LINES);

        glColor3ub(243, 106, 33);



        glVertex2f(4.4, 9);

        glVertex2f(6.4, 9);



        glVertex2f(6.4, 9);

        glVertex2f(6.4, 13.8);



        glVertex2f(4.4, 13.8);

        glVertex2f(6.4, 13.8);



        glVertex2f(4.4, 13.8);

        glVertex2f(4.4, 9);



        glVertex2f(4.8, 13.8);

        glVertex2f(4.8, 9);



        glVertex2f(5.2, 13.8);

        glVertex2f(5.2, 9);



        glVertex2f(5.6, 13.8);

        glVertex2f(5.6, 9);



        glVertex2f(6, 13.8);

        glVertex2f(6., 9);



        glEnd();

        ////

         //BULDING 3



        glBegin(GL_QUADS);

        glColor3ub(0, 0, 150);

        glVertex2f(8.5, 9);

        glVertex2f(10, 9);

        glVertex2f(10, 14.5);

        glVertex2f(8.5, 14.5);

        glEnd();

        //WINDOW

        glBegin(GL_QUADS);

        glColor3ub(243, 106, 33);

        glVertex2f(8.7, 12.1);

        glVertex2f(9.2, 12.1);

        glVertex2f(9.2, 12.8);

        glVertex2f(8.7, 12.8);

        glEnd();



        glBegin(GL_QUADS);

        glColor3ub(243, 106, 33);

        glVertex2f(8.7, 13.5);

        glVertex2f(9.2, 13.5);

        glVertex2f(9.2, 14.1);

        glVertex2f(8.7, 14.1);

        glEnd();





        //black building with 1 window

        glBegin(GL_QUADS);

        glColor3f(0.1f, 0.1f, 0.1f);

        glVertex2f(6.4, 9);

        glVertex2f(9, 9);

        glVertex2f(9, 11);

        glVertex2f(6.4, 11);

        glEnd();



        //window

        glBegin(GL_QUADS);

        glColor3ub(243, 106, 33);

        glVertex2f(6.6, 9.2);

        glVertex2f(7, 9.2);

        glVertex2f(7, 9.6);

        glVertex2f(6.6, 9.6);

        glEnd();



        // 2 traingle



        glBegin(GL_TRIANGLES);

        glColor3ub(0, 233, 0);



        glVertex2f(6.4, 11);

        glVertex2f(9, 11.6);

        glVertex2f(9, 11);



        glEnd();



        glBegin(GL_TRIANGLES);

        glColor3ub(243, 106, 33);

        glVertex2f(6.4, 11.7);

        glVertex2f(6.4, 11);

        glVertex2f(8, 11.3);



        glEnd();

        Last_7_Building();

        Tree();

        Bench();

        LampPosts();

        // Draw stars



        glColor3f(1.0, 1.0, 1.0); // White for stars

        glBegin(GL_POINTS);

        glVertex2i(10, 18);

        glVertex2i(10, 15);

        glVertex2i(10, 19);

        glVertex2i(1, 17);

        glVertex2i(3, 17);

        glVertex2i(2, 19);



        glEnd();

       // Satalight();

        //Human_Combo_Night();

    }




    glPushMatrix();

    Fixed_Human1();

    glPopMatrix();



    glPushMatrix();

    Fixed_Human2();

    glPopMatrix();



    glPushMatrix();

    CarFunction_1();

    glPopMatrix();



    glPushMatrix();

    CarFunction_3();

    glPopMatrix();



    glPushMatrix();

    CarFunction_2();

    glPopMatrix();



    glutPostRedisplay();

        if (isRain) {
        // Draw rain
        glColor3f(1.0, 1.0, 1.0); // White color for rain
        glBegin(GL_LINES);
        for (int i = 0; i < 1000; i++) {
            float x = (float)rand() / RAND_MAX * 23.0; // Random x position
            float y = (float)rand() / RAND_MAX * 9.0; // Random y position
            glVertex2f(x, y);
            glVertex2f(x, y - 0.1); // Draw a short line to represent a raindrop
        }
        glEnd();

    }


    glutSwapBuffers();

}



// Function to handle keyboard input

void keyboard(unsigned char key, int x, int y) {

    switch (key) {

    case 'D':

    case 'd':

        isDay = true;

        glClearColor(0.7, 0.7, 1.0, 1.0); // Set background color to light blue (day)

        break;

    case 'N':

    case 'n':

        isDay = false;

        glClearColor(0.0, 0.0, 0.2, 1.0); // Set background color to dark blue (night)

        break;

     case 'R':

    case 'r':

        isRain = true;

        glClearColor(0.0, 0.0, 0.0, 1.0); // Set background color to light blue (day)
        MoonN=-20000;

         sndPlaySound("rain.wav",SND_ASYNC);
         //isLightning=true;
        //sunn=0;

        break;
    default:

        break;

    }



    glutPostRedisplay(); // Trigger a redraw

}



int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(800, 600);

    glutCreateWindow("Urban Scenario");



    init();



    glutDisplayFunc(display);


    glutKeyboardFunc(keyboard);
    sndPlaySound("city.wav",SND_ASYNC);
        //glutTimerFunc(0, timer, 0);




    glutMainLoop();



    return 0;

}
