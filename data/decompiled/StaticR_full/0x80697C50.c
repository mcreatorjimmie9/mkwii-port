/* Function at 0x80697C50, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80697C50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80697C5C
    *(0xc + r1) = r31; // stw @ 0x80697C60
    r31 = r4;
    if (==) goto 0x0x80697c78;
    if (==) goto 0x0x80697d3c;
    /* b 0x80697d54 */ // 0x80697C74
    r3 = r31;
    FUN_80694774(r3); // bl 0x80694774
    if (!=) goto 0x0x80697cf4;
    r0 = r31 + -0x19; // 0x80697C88
    if (<=) goto 0x0x80697cbc;
    r0 = r31 + -0x68; // 0x80697C94
    if (<=) goto 0x0x80697cd4;
    if (==) goto 0x0x80697cbc;
    if (==) goto 0x0x80697cbc;
    if (==) goto 0x0x80697cd4;
    /* b 0x80697cec */ // 0x80697CB8
    /* li r3, 0x4c0 */ // 0x80697CBC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80697d58;
    FUN_806808E4(r3); // bl 0x806808E4
    /* b 0x80697d58 */ // 0x80697CD0
    /* li r3, 0x4c0 */ // 0x80697CD4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80697d58;
    FUN_80680DA4(r3); // bl 0x80680DA4
    /* b 0x80697d58 */ // 0x80697CE8
    /* li r3, 0 */ // 0x80697CEC
    /* b 0x80697d58 */ // 0x80697CF0
    r0 = r31 + -0x5e; // 0x80697CF4
    if (<=) goto 0x0x80697d0c;
    r0 = r31 + -0x58; // 0x80697D00
    if (>) goto 0x0x80697d24;
    /* li r3, 0x4c0 */ // 0x80697D0C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80697d58;
}