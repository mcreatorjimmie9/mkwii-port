/* Function at 0x807433E4, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_807433E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807433F0
    r31 = r3;
    r0 = *(0x13b + r3); // lbz @ 0x807433F8
    if (!=) goto 0x0x80743434;
    r0 = *(0xf8 + r3); // lbz @ 0x80743404
    if (==) goto 0x0x8074341c;
    /* li r4, 1 */ // 0x80743410
    FUN_807432B0(r4); // bl 0x807432B0
    /* b 0x807434ac */ // 0x80743418
    r0 = *(0xf9 + r3); // lbz @ 0x8074341C
    if (==) goto 0x0x807434ac;
    /* li r4, 0 */ // 0x80743428
    FUN_807432B0(r4); // bl 0x807432B0
    /* b 0x807434ac */ // 0x80743430
    r0 = *(0xf8 + r3); // lbz @ 0x80743434
    if (==) goto 0x0x8074344c;
    /* li r4, 1 */ // 0x80743440
    FUN_807432B0(r4); // bl 0x807432B0
    /* b 0x8074346c */ // 0x80743448
    r0 = *(0xf9 + r3); // lbz @ 0x8074344C
    if (==) goto 0x0x8074346c;
    r0 = *(0xfa + r3); // lbz @ 0x80743458
    if (==) goto 0x0x8074346c;
    /* li r4, 0 */ // 0x80743464
    FUN_807432B0(r4); // bl 0x807432B0
    r0 = *(0xfd + r31); // lbz @ 0x8074346C
    if (==) goto 0x0x80743488;
    r3 = r31;
    /* li r4, 1 */ // 0x8074347C
    FUN_807432B0(r3, r4); // bl 0x807432B0
    /* b 0x807434ac */ // 0x80743484
    r0 = *(0xfc + r31); // lbz @ 0x80743488
    if (==) goto 0x0x807434ac;
    r0 = *(0xf6 + r31); // lbz @ 0x80743494
    if (!=) goto 0x0x807434ac;
    r3 = r31;
    /* li r4, 0 */ // 0x807434A4
    FUN_807432B0(r3, r4); // bl 0x807432B0
    r0 = *(0x14 + r1); // lwz @ 0x807434AC
    r31 = *(0xc + r1); // lwz @ 0x807434B0
    return;
}