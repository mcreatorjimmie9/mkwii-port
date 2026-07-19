/* Function at 0x80871BFC, size=192 bytes */
/* Stack frame: 0 bytes */

int FUN_80871BFC(int r3, int r4, int r5)
{
    /* li r5, 0 */ // 0x80871C00
    if (==) goto 0x0x80871c94;
    /* slwi r0, r4, 3 */ // 0x80871C08
    r3 = r3 + r0; // 0x80871C0C
    r0 = *(0x18c + r3); // lbz @ 0x80871C10
    if (==) goto 0x0x80871c20;
    /* li r5, 1 */ // 0x80871C1C
    r0 = *(0x18d + r3); // lbz @ 0x80871C20
    if (==) goto 0x0x80871c30;
    r5 = r5 + 1; // 0x80871C2C
    r0 = *(0x18e + r3); // lbz @ 0x80871C30
    if (==) goto 0x0x80871c40;
    r5 = r5 + 1; // 0x80871C3C
    r0 = *(0x18f + r3); // lbz @ 0x80871C40
    if (==) goto 0x0x80871c50;
    r5 = r5 + 1; // 0x80871C4C
    r0 = *(0x190 + r3); // lbz @ 0x80871C50
    if (==) goto 0x0x80871c60;
    r5 = r5 + 1; // 0x80871C5C
    r0 = *(0x191 + r3); // lbz @ 0x80871C60
    if (==) goto 0x0x80871c70;
    r5 = r5 + 1; // 0x80871C6C
    r0 = *(0x192 + r3); // lbz @ 0x80871C70
    if (==) goto 0x0x80871c80;
    r5 = r5 + 1; // 0x80871C7C
    r0 = *(0x193 + r3); // lbz @ 0x80871C80
    if (==) goto 0x0x80871cb4;
    r5 = r5 + 1; // 0x80871C8C
    /* b 0x80871cb4 */ // 0x80871C90
    r0 = *(0x1a4 + r3); // lbz @ 0x80871C94
    if (==) goto 0x0x80871ca4;
    /* li r5, 1 */ // 0x80871CA0
    r0 = *(0x1a5 + r3); // lbz @ 0x80871CA4
    if (==) goto 0x0x80871cb4;
    r5 = r5 + 1; // 0x80871CB0
    r3 = r5;
    return;
}