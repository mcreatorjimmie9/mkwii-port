/* Function at 0x80656C00, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80656C00(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r5 = *(0 + r4); // lha @ 0x80656C08
    r0 = *(2 + r4); // lha @ 0x80656C10
    *(0x1c + r1) = r31; // stw @ 0x80656C14
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80656C20
    *(0x14 + r1) = r29; // stw @ 0x80656C24
    r29 = r3;
    if (<) goto 0x0x80656d48;
    r4 = *(8 + r4); // lhz @ 0x80656C30
    r5 = *(0xa + r31); // lhz @ 0x80656C34
    FUN_80656D64(); // bl 0x80656D64
    /* lis r3, 0 */ // 0x80656C3C
    r4 = *(0x42 + r31); // lhz @ 0x80656C40
    r3 = *(0 + r3); // lwz @ 0x80656C44
    r0 = *(0x3c + r31); // lhz @ 0x80656C48
    r5 = *(0 + r3); // lwz @ 0x80656C4C
    r3 = r5 u/ r4; // 0x80656C50
    r3 = r3 * r4; // 0x80656C54
    /* subf r5, r3, r5 */ // 0x80656C58
    if (>=) goto 0x0x80656c6c;
    /* li r0, 0 */ // 0x80656C64
    /* b 0x80656cac */ // 0x80656C68
    r0 = *(0x3e + r31); // lhz @ 0x80656C6C
    if (>=) goto 0x0x80656c80;
    /* li r0, 1 */ // 0x80656C78
    /* b 0x80656cac */ // 0x80656C7C
    r0 = *(0x40 + r31); // lhz @ 0x80656C80
    if (>=) goto 0x0x80656c94;
    /* li r0, 2 */ // 0x80656C8C
    /* b 0x80656cac */ // 0x80656C90
    r0 = *(0x42 + r31); // lhz @ 0x80656C94
    if (>=) goto 0x0x80656ca8;
    /* li r0, 3 */ // 0x80656CA0
    /* b 0x80656cac */ // 0x80656CA4
    /* li r0, 0 */ // 0x80656CA8
    /* mulli r30, r0, 0xc */ // 0x80656CAC
    r0 = *(0xc + r29); // lwz @ 0x80656CB0
    r3 = r31 + r30; // 0x80656CB4
    r3 = *(0xc + r3); // lwz @ 0x80656CB8
    if (==) goto 0x0x80656cd0;
    *(0xc + r29) = r3; // stw @ 0x80656CC4
    /* li r4, 0 */ // 0x80656CC8
    FUN_805E3430(r4); // bl 0x805E3430
    /* li r3, 0x80 */ // 0x80656CD0
    /* li r4, 0 */ // 0x80656CD4
    /* li r5, 4 */ // 0x80656CD8
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
    /* lis r6, -0x33ff */ // 0x80656CE0
    r7 = *(4 + r31); // lha @ 0x80656CE4
    *(-0x8000 + r6) = r7; // sth @ 0x80656CE8
    r5 = r31 + r30; // 0x80656CEC
    r8 = *(0 + r31); // lha @ 0x80656CF0
    *(-0x8000 + r6) = r8; // sth @ 0x80656CF4
    r4 = *(0x10 + r5); // lhz @ 0x80656CF8
}