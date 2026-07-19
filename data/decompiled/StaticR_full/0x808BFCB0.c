/* Function at 0x808BFCB0, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808BFCB0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808BFCBC
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x808BFCC4
    if (<) goto 0x0x808bfd0c;
    r4 = *(0x240 + r4); // lwz @ 0x808BFCD0
    if (<) goto 0x0x808bfd04;
    if (>=) goto 0x0x808bfd04;
    r3 = *(0x44 + r3); // lwz @ 0x808BFCE4
    FUN_8066E0EC(); // bl 0x8066E0EC
    *(0x35c + r31) = r3; // stw @ 0x808BFCEC
    r3 = r31 + 0xda8; // 0x808BFCF0
    r5 = r31 + 0x314; // 0x808BFCF4
    /* li r4, 0x251d */ // 0x808BFCF8
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808bfd0c */ // 0x808BFD00
    r3 = r3 + 0xda8; // 0x808BFD04
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    r0 = *(0x14 + r1); // lwz @ 0x808BFD0C
    r31 = *(0xc + r1); // lwz @ 0x808BFD10
    return;
}