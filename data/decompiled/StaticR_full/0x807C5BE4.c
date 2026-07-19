/* Function at 0x807C5BE4, size=732 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r21 */
/* Calls: 13 function(s) */

int FUN_807C5BE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x807C5BEC
    *(0xe4 + r1) = r0; // stw @ 0x807C5BF0
    /* stmw r21, 0xb4(r1) */ // 0x807C5BF4
    r24 = r3;
    r25 = r4;
    r3 = *(0 + r5); // lwz @ 0x807C5C00
    r22 = *(0x14 + r3); // lwz @ 0x807C5C04
    FUN_807BFFA8(); // bl 0x807BFFA8
    /* subf r6, r3, r22 */ // 0x807C5C0C
    if (<=) goto 0x0x807c5c20;
    /* li r6, 0xc */ // 0x807C5C18
    /* b 0x807c5c2c */ // 0x807C5C1C
    if (>=) goto 0x0x807c5c2c;
    /* li r6, 0 */ // 0x807C5C28
    /* lis r3, 0 */ // 0x807C5C2C
    /* li r0, 0x13 */ // 0x807C5C30
    r3 = r3 + 0; // 0x807C5C34
    r4 = r3 + -4; // 0x807C5C3C
    /* mtctr r0 */ // 0x807C5C40
    r3 = *(4 + r4); // lwz @ 0x807C5C44
    r0 = *(8 + r4); // lwzu @ 0x807C5C48
    *(4 + r5) = r3; // stw @ 0x807C5C4C
    *(8 + r5) = r0; // stwu @ 0x807C5C50
    if (counter-- != 0) goto 0x0x807c5c44;
    r0 = *(4 + r4); // lwz @ 0x807C5C58
    /* mulli r6, r6, 0xc */ // 0x807C5C5C
    *(4 + r5) = r0; // stw @ 0x807C5C60
    /* lwzx r28, r3, r6 */ // 0x807C5C6C
    /* lwzx r27, r4, r6 */ // 0x807C5C74
    /* lwzx r26, r3, r6 */ // 0x807C5C7C
    if (<=) goto 0x0x807c5d30;
    /* cntlzw r0, r25 */ // 0x807C5C84
    r23 = *(0x168 + r24); // lwz @ 0x807C5C88
    /* srwi r21, r0, 5 */ // 0x807C5C8C
    /* li r22, 0 */ // 0x807C5C90
    /* b 0x807c5d14 */ // 0x807C5C94
    if (==) goto 0x0x807c5cb4;
    if (==) goto 0x0x807c5cc8;
    if (==) goto 0x0x807c5cdc;
    /* b 0x807c5cec */ // 0x807C5CB0
    r3 = r24;
    /* li r4, -1 */ // 0x807C5CB8
    FUN_807C63D0(r3, r4); // bl 0x807C63D0
    r31 = r3;
    /* b 0x807c5cec */ // 0x807C5CC4
    r3 = r24;
    /* li r4, -1 */ // 0x807C5CCC
    FUN_807C64A0(r3, r4); // bl 0x807C64A0
    r31 = r3;
    /* b 0x807c5cec */ // 0x807C5CD8
    r3 = r24;
    /* li r4, -1 */ // 0x807C5CE0
    FUN_807C656C(r3, r4); // bl 0x807C656C
    r31 = r3;
    if (==) goto 0x0x807c5d10;
    *(8 + r31) = r23; // stw @ 0x807C5CF4
    r3 = r23;
    r4 = r31;
    r12 = *(0 + r23); // lwz @ 0x807C5D00
    r12 = *(0x18 + r12); // lwz @ 0x807C5D04
    /* mtctr r12 */ // 0x807C5D08
    /* bctrl  */ // 0x807C5D0C
    r22 = r22 + 1; // 0x807C5D10
    if (<) goto 0x0x807c5c98;
    r3 = *(0x168 + r24); // lwz @ 0x807C5D1C
    /* li r0, 1 */ // 0x807C5D20
    *(8 + r3) = r0; // stw @ 0x807C5D24
    r3 = *(0x168 + r24); // lwz @ 0x807C5D28
    FUN_807C3A1C(); // bl 0x807C3A1C
    if (<=) goto 0x0x807c5dec;
    r22 = *(0x16c + r24); // lwz @ 0x807C5D38
    /* li r23, 0 */ // 0x807C5D3C
    /* b 0x807c5dd0 */ // 0x807C5D40
    /* li r0, 2 */ // 0x807C5D48
    if (==) goto 0x0x807c5d54;
    /* li r0, 0 */ // 0x807C5D50
    if (==) goto 0x0x807c5d70;
    if (==) goto 0x0x807c5d84;
    if (==) goto 0x0x807c5d98;
    /* b 0x807c5da8 */ // 0x807C5D6C
    r3 = r24;
    /* li r4, -1 */ // 0x807C5D74
    FUN_807C63D0(r3, r4); // bl 0x807C63D0
    r30 = r3;
    /* b 0x807c5da8 */ // 0x807C5D80
    r3 = r24;
    /* li r4, -1 */ // 0x807C5D88
    FUN_807C64A0(r3, r4); // bl 0x807C64A0
    r30 = r3;
    /* b 0x807c5da8 */ // 0x807C5D94
    r3 = r24;
    /* li r4, -1 */ // 0x807C5D9C
    FUN_807C656C(r3, r4); // bl 0x807C656C
    r30 = r3;
    if (==) goto 0x0x807c5dcc;
    *(8 + r30) = r22; // stw @ 0x807C5DB0
    r3 = r22;
    r4 = r30;
    r12 = *(0 + r22); // lwz @ 0x807C5DBC
    r12 = *(0x18 + r12); // lwz @ 0x807C5DC0
    /* mtctr r12 */ // 0x807C5DC4
    /* bctrl  */ // 0x807C5DC8
    r23 = r23 + 1; // 0x807C5DCC
    if (<) goto 0x0x807c5d44;
    r3 = *(0x16c + r24); // lwz @ 0x807C5DD8
    r0 = r28 + 1; // 0x807C5DDC
    *(8 + r3) = r0; // stw @ 0x807C5DE0
    r3 = *(0x16c + r24); // lwz @ 0x807C5DE4
    FUN_807C3ACC(); // bl 0x807C3ACC
    if (<=) goto 0x0x807c5eac;
    r22 = *(0x170 + r24); // lwz @ 0x807C5DF4
    /* li r23, 0 */ // 0x807C5DF8
    /* b 0x807c5e8c */ // 0x807C5DFC
    /* li r0, 2 */ // 0x807C5E04
    if (==) goto 0x0x807c5e10;
    /* li r0, 0 */ // 0x807C5E0C
    if (==) goto 0x0x807c5e2c;
    if (==) goto 0x0x807c5e40;
    if (==) goto 0x0x807c5e54;
    /* b 0x807c5e64 */ // 0x807C5E28
    r3 = r24;
    /* li r4, -1 */ // 0x807C5E30
    FUN_807C63D0(r3, r4); // bl 0x807C63D0
    r29 = r3;
    /* b 0x807c5e64 */ // 0x807C5E3C
    r3 = r24;
    /* li r4, -1 */ // 0x807C5E44
    FUN_807C64A0(r3, r4); // bl 0x807C64A0
    r29 = r3;
    /* b 0x807c5e64 */ // 0x807C5E50
    r3 = r24;
    /* li r4, -1 */ // 0x807C5E58
    FUN_807C656C(r3, r4); // bl 0x807C656C
    r29 = r3;
    if (==) goto 0x0x807c5e88;
    *(8 + r29) = r22; // stw @ 0x807C5E6C
    r3 = r22;
    r4 = r29;
    r12 = *(0 + r22); // lwz @ 0x807C5E78
    r12 = *(0x18 + r12); // lwz @ 0x807C5E7C
    /* mtctr r12 */ // 0x807C5E80
    /* bctrl  */ // 0x807C5E84
    r23 = r23 + 1; // 0x807C5E88
    if (<) goto 0x0x807c5e00;
    r3 = *(0x170 + r24); // lwz @ 0x807C5E94
    r4 = r28 + r27; // 0x807C5E98
    r0 = r4 + 1; // 0x807C5E9C
    *(8 + r3) = r0; // stw @ 0x807C5EA0
    r3 = *(0x170 + r24); // lwz @ 0x807C5EA4
    FUN_807C3ACC(); // bl 0x807C3ACC
    r0 = *(0xe4 + r1); // lwz @ 0x807C5EB0
    return;
}