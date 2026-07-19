/* Function at 0x808F5118, size=132 bytes */
/* Stack frame: 0 bytes */

void FUN_808F5118(int r3, int r4, int r5)
{
    r0 = *(0x6ff + r3); // lbz @ 0x808F5118
    if (!=) goto 0x0x808f512c;
    /* li r3, 0 */ // 0x808F5124
    return;
    r0 = *(0x6fa + r3); // lbz @ 0x808F512C
    /* li r5, -1 */ // 0x808F5130
    if (==) goto 0x0x808f5170;
    if (==) goto 0x0x808f5158;
    if (==) goto 0x0x808f5160;
    if (==) goto 0x0x808f5168;
    /* b 0x808f5170 */ // 0x808F5154
    /* li r4, 0x1d */ // 0x808F5158
    /* b 0x808f495c */ // 0x808F515C
    /* li r4, 0x1e */ // 0x808F5160
    /* b 0x808f495c */ // 0x808F5164
    /* li r4, 0x1f */ // 0x808F5168
    /* b 0x808f495c */ // 0x808F516C
    if (==) goto 0x0x808f5180;
    /* li r4, -1 */ // 0x808F5178
    /* b 0x808f4584 */ // 0x808F517C
    /* li r3, 0 */ // 0x808F5180
    return;
    r0 = *(0x6ff + r3); // lbz @ 0x808F5188
    if (==) goto 0x0x808f519c;
    /* li r4, 3 */ // 0x808F5194
    /* b 0x808f4584 */ // 0x808F5198
}