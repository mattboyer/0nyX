style "lxpanelwindow"{
xthickness=0
ythickness=0
GtkWidget::shadow-type=GTK_SHADOW_NONE
GtkButton::inner-border={4,4,4,4}
GtkButton::image-spacing=10
engine"pixmap"{
image{
function=BOX
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=HANDLE
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=OUT
file="../images/gtk-2.0/none.svg"
border={2,2,0,2}
stretch=TRUE}}}
widget_class "*PanelToplevel*" style "lxpanelwindow"

style"lxpanelbutton"{
xthickness=0
ythickness=0
GtkButton::inner-border={4,4,4,4}
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class"*PanelToplevel*Button*"style"lxpanelbutton"

style"lxpaneltask"{
xthickness=3
ythickness=3
GtkButton::inner-border={4,4,4,4}
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/panel-task_prelight.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/panel-task_prelight.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class"*PanelToplevel*TaskButton*"style"lxpaneltask"

style "pcmanfm"{
xthickness=0
ythickness=0
engine"pixmap"{
image{
function=FLAT_BOX
file="../images/gtk-2.0/window-color.svg"
state=NORMAL
stretch=TRUE
border={0,2,0,0}}
image{
function=FLAT_BOX
file="../images/gtk-2.0/selection-color.svg"
state=SELECTED
stretch=TRUE
border={0,2,0,0}}}}
widget_class "*FmSidePane*"style "pcmanfm"

style"lxpanelbold"{
xthickness=0
ythickness=0
font_name="bold"}
widget_class"*PanelToplevel*TaskButton*"style"lxpanelbold"
widget"*TaskButton*GtkLabel"style"lxpanelbold"
widget"*taskbar*"style"lxpanelbold"
widget"*dclock*"style"lxpanelbold"
widget"*PanelIconGrid*"style"lxpanelbold"
