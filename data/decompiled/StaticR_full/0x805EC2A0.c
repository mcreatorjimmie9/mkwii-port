/* Function at 0x805EC2A0, size=124 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 2 function(s) */

int FUN_805EC2A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* stmw r20, 0x10(r1) */ // 0x805EC2AC
    r26 = r5;
    r5 = r7;
    r27 = r8;
    r7 = r4;
    r8 = r6;
    r25 = r3;
    r28 = r9;
    /* li r4, 3 */ // 0x805EC2CC
    /* li r6, 0 */ // 0x805EC2D0
    FUN_805EB7C0(r8, r4, r6); // bl 0x805EB7C0
    r0 = *(0x3c + r25); // lwz @ 0x805EC2D8
    /* li r3, 0 */ // 0x805EC2DC
    if (==) goto 0x0x805ec2f4;
    if (==) goto 0x0x805ec300;
    /* b 0x805ec30c */ // 0x805EC2F0
    /* lis r3, 0 */ // 0x805EC2F4
    r3 = *(0 + r3); // lwz @ 0x805EC2F8
    /* b 0x805ec30c */ // 0x805EC2FC
    /* lis r3, 0 */ // 0x805EC300
    r3 = r3 + 0; // 0x805EC304
    r3 = *(4 + r3); // lwz @ 0x805EC308
    r4 = *(0x10 + r3); // lwz @ 0x805EC30C
    /* li r3, 0x1c */ // 0x805EC310
    /* li r5, 4 */ // 0x805EC314
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
}