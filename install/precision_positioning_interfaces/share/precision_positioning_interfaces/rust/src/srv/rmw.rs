#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__Home_Request() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__Home_Request__init(msg: *mut Home_Request) -> bool;
    fn precision_positioning_interfaces__srv__Home_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_Request>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__Home_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_Request>);
    fn precision_positioning_interfaces__srv__Home_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_Request>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__Home_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Home_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__Home_Request__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__Home_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__Home_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__Home_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__Home_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_Request where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/Home_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__Home_Request() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__Home_Response() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__Home_Response__init(msg: *mut Home_Response) -> bool;
    fn precision_positioning_interfaces__srv__Home_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_Response>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__Home_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_Response>);
    fn precision_positioning_interfaces__srv__Home_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_Response>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__Home_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Home_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__Home_Response__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__Home_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__Home_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__Home_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__Home_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_Response where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/Home_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__Home_Response() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__EmergencyStop_Request() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__EmergencyStop_Request__init(msg: *mut EmergencyStop_Request) -> bool;
    fn precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Request>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Request>);
    fn precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EmergencyStop_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Request>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__EmergencyStop_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for EmergencyStop_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__EmergencyStop_Request__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__EmergencyStop_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EmergencyStop_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EmergencyStop_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EmergencyStop_Request where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/EmergencyStop_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__EmergencyStop_Request() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__EmergencyStop_Response() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__EmergencyStop_Response__init(msg: *mut EmergencyStop_Response) -> bool;
    fn precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Response>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Response>);
    fn precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EmergencyStop_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Response>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__EmergencyStop_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for EmergencyStop_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__EmergencyStop_Response__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__EmergencyStop_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EmergencyStop_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EmergencyStop_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EmergencyStop_Response where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/EmergencyStop_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__EmergencyStop_Response() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__ResetEncoder_Request() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__ResetEncoder_Request__init(msg: *mut ResetEncoder_Request) -> bool;
    fn precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetEncoder_Request>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetEncoder_Request>);
    fn precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetEncoder_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetEncoder_Request>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__ResetEncoder_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetEncoder_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reset_position_mm: f64,

}



impl Default for ResetEncoder_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__ResetEncoder_Request__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__ResetEncoder_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetEncoder_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetEncoder_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetEncoder_Request where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/ResetEncoder_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__ResetEncoder_Request() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__ResetEncoder_Response() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__ResetEncoder_Response__init(msg: *mut ResetEncoder_Response) -> bool;
    fn precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetEncoder_Response>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetEncoder_Response>);
    fn precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetEncoder_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetEncoder_Response>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__ResetEncoder_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetEncoder_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ResetEncoder_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__ResetEncoder_Response__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__ResetEncoder_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetEncoder_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetEncoder_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetEncoder_Response where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/ResetEncoder_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__ResetEncoder_Response() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveAbsolute_Request() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__MoveAbsolute_Request__init(msg: *mut MoveAbsolute_Request) -> bool;
    fn precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveAbsolute_Request>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveAbsolute_Request>);
    fn precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveAbsolute_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveAbsolute_Request>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__MoveAbsolute_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveAbsolute_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position_mm: f64,

}



impl Default for MoveAbsolute_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__MoveAbsolute_Request__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__MoveAbsolute_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveAbsolute_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveAbsolute_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveAbsolute_Request where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/MoveAbsolute_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveAbsolute_Request() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveAbsolute_Response() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__MoveAbsolute_Response__init(msg: *mut MoveAbsolute_Response) -> bool;
    fn precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveAbsolute_Response>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveAbsolute_Response>);
    fn precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveAbsolute_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveAbsolute_Response>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__MoveAbsolute_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveAbsolute_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_position_mm: f64,

}



impl Default for MoveAbsolute_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__MoveAbsolute_Response__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__MoveAbsolute_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveAbsolute_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveAbsolute_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveAbsolute_Response where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/MoveAbsolute_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveAbsolute_Response() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveRelative_Request() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__MoveRelative_Request__init(msg: *mut MoveRelative_Request) -> bool;
    fn precision_positioning_interfaces__srv__MoveRelative_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveRelative_Request>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__MoveRelative_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveRelative_Request>);
    fn precision_positioning_interfaces__srv__MoveRelative_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveRelative_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveRelative_Request>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__MoveRelative_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveRelative_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_mm: f64,

}



impl Default for MoveRelative_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__MoveRelative_Request__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__MoveRelative_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveRelative_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveRelative_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveRelative_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveRelative_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveRelative_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveRelative_Request where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/MoveRelative_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveRelative_Request() }
  }
}


#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveRelative_Response() -> *const std::ffi::c_void;
}

#[link(name = "precision_positioning_interfaces__rosidl_generator_c")]
extern "C" {
    fn precision_positioning_interfaces__srv__MoveRelative_Response__init(msg: *mut MoveRelative_Response) -> bool;
    fn precision_positioning_interfaces__srv__MoveRelative_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveRelative_Response>, size: usize) -> bool;
    fn precision_positioning_interfaces__srv__MoveRelative_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveRelative_Response>);
    fn precision_positioning_interfaces__srv__MoveRelative_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveRelative_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveRelative_Response>) -> bool;
}

// Corresponds to precision_positioning_interfaces__srv__MoveRelative_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveRelative_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_position_mm: f64,

}



impl Default for MoveRelative_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !precision_positioning_interfaces__srv__MoveRelative_Response__init(&mut msg as *mut _) {
        panic!("Call to precision_positioning_interfaces__srv__MoveRelative_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveRelative_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveRelative_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveRelative_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { precision_positioning_interfaces__srv__MoveRelative_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveRelative_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveRelative_Response where Self: Sized {
  const TYPE_NAME: &'static str = "precision_positioning_interfaces/srv/MoveRelative_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__precision_positioning_interfaces__srv__MoveRelative_Response() }
  }
}






#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__Home() -> *const std::ffi::c_void;
}

// Corresponds to precision_positioning_interfaces__srv__Home
#[allow(missing_docs, non_camel_case_types)]
pub struct Home;

impl rosidl_runtime_rs::Service for Home {
    type Request = Home_Request;
    type Response = Home_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__Home() }
    }
}




#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__EmergencyStop() -> *const std::ffi::c_void;
}

// Corresponds to precision_positioning_interfaces__srv__EmergencyStop
#[allow(missing_docs, non_camel_case_types)]
pub struct EmergencyStop;

impl rosidl_runtime_rs::Service for EmergencyStop {
    type Request = EmergencyStop_Request;
    type Response = EmergencyStop_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__EmergencyStop() }
    }
}




#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__ResetEncoder() -> *const std::ffi::c_void;
}

// Corresponds to precision_positioning_interfaces__srv__ResetEncoder
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetEncoder;

impl rosidl_runtime_rs::Service for ResetEncoder {
    type Request = ResetEncoder_Request;
    type Response = ResetEncoder_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__ResetEncoder() }
    }
}




#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__MoveAbsolute() -> *const std::ffi::c_void;
}

// Corresponds to precision_positioning_interfaces__srv__MoveAbsolute
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveAbsolute;

impl rosidl_runtime_rs::Service for MoveAbsolute {
    type Request = MoveAbsolute_Request;
    type Response = MoveAbsolute_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__MoveAbsolute() }
    }
}




#[link(name = "precision_positioning_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__MoveRelative() -> *const std::ffi::c_void;
}

// Corresponds to precision_positioning_interfaces__srv__MoveRelative
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveRelative;

impl rosidl_runtime_rs::Service for MoveRelative {
    type Request = MoveRelative_Request;
    type Response = MoveRelative_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__precision_positioning_interfaces__srv__MoveRelative() }
    }
}


