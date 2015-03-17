<?php

/*
 *
 *
 *
 *
 *
 *
 */
?>

<!--[if IE]><script src="http://support.ideaden.com/packages/excanvas.js?1362215465" type="text/javascript"></script><![endif]-->

<div class="content ui-widget-container" id="ui-widget-container" name="ui-widget-container">
	<p>
		[site_name] is managed by Idea Den.  For technical support or questions about [site_name], please submit a ticket via the form below. We may have already answered your question in our FAQ as well. be sure to <a href="http://ideaden.freshdesk.com " target="_blank">CHECK IT OUT HERE.</a>
	</p>
	<form  enctype="multipart/form-data" id="fd_feedback_widget" name="fd_feedback_widget" class="required-form">

		<ul class="ui-form" style="list-style: none;">

			<li class="email">
				<label for="helpdesk_ticket_email">Email Address<span class="required_start">*</span></label>
				<input class="required email" id="helpdesk_ticket_email" name="helpdesk_ticket[email]" size="30" type="text" value="" />
			</li>

			<li class="text" >
				<label for="helpdesk_ticket_subject">Subject<span class="required_start">*</span></label>
				<input class="required text" id="helpdesk_ticket_subject" name="helpdesk_ticket[subject]" size="30" type="text" value="" />
			</li>

			<li class="text" style="display:none;">
				<label for="helpdesk_ticket_custom_field_operating_system_30687">Operating System<span class="required_start">*</span>
					<br />
				</label>
				<input class="text" id="helpdesk_ticket_custom_field_operating_system_30687" name="helpdesk_ticket[custom_field][operating_system_30687]" size="30" type="text" value=""   />
			</li>

			<li class="text" style="display:none;" >
				<label for="helpdesk_ticket_custom_field_browser_30687">Browser<span class="required_start">*</span>
					<br />
				</label>
				<input class="  text" id="helpdesk_ticket_custom_field_browser_30687" name="helpdesk_ticket[custom_field][browser_30687]" size="30" type="text" value=""   />
			</li>

			<li class="dropdown_blank" style="display:none;">
				<label for="helpdesk_ticket_product_id">Website<span class="required_start">*</span></label>
				<select class="dropdown_blank" id="helpdesk_ticket_product_id" name="helpdesk_ticket[product_id]">
					<option value="[freshdesk_id]">[site_name]</option>
				</select>
			</li>

			<li class="dropdown">
				<label for="helpdesk_ticket_ticket_type">What's Your Feedback About?<span class="required_start">*</span></label>
				<select class="dropdown" id="helpdesk_ticket_ticket_type" name="helpdesk_ticket[ticket_type]">
					<option value="General Questions or Feedback">General Questions or Feedback</option>
					<option value="Questions on your Digital Order">Questions on your Digital Order</option>
					<option value="Questions on your Order">Questions on your Order</option>
				</select>
			</li>

			<li class="paragraph">
				<label for="helpdesk_ticket_ticket_body_attributes_description_html">Ask a question or leave us a message<span class="required_start">*</span></label>				
				<textarea class="required paragraph" cols="25" id="helpdesk_ticket_ticket_body_attributes_description_html" name="helpdesk_ticket[ticket_body_attributes][description_html]" rows="10"></textarea>
			</li>
			<!--<div class="attachment">
				<div class="attach_wrapper clearfix">
					<div class="attach_file">
						<label>Attach a file from your computer</label>
						<input type="file" id="ticket_file" name="emptyfile" nameWhenFilled="helpdesk_ticket[attachments][][resource]" fileContainer="ticket-container" fileList="ticket-attachments" sendFocusTo="ticket-body" />
						<div class="info-data">
							File size < 15 MB
						</div>
					</div>

				</div>
			<div class="attachments" id="ticket-container" style="display:none">
					<div id="ticket-attachments"></div>
			</div>-->

				<script id="file-list-template" type="text/x-jquery-tmpl">
					<div class="item">
					<span>
					${name} - <a href="javascript:void(0)" onclick="Helpdesk.Multifile.remove(this); return false;" inputId="${inputId}">remove</a>
					</span>
					</div>
				</script>

			</li>
		

			<li class="text" style="list-style: none;">
				<label>Please type letters below<span class="required_start">*</span></label>
				<input  class="required" id="defaultReal" name="defaultReal" size="30" type="text" value="" />
			</li>
		</ul>
<br />
		<div class="button-container">
			<input class="uiButton" id="helpdesk_ticket_submit" name="commit" type="submit" value="Submit" />

			<input id="meta_user_agent" name="meta[user_agent]" type="hidden" value="Mozilla/5.0 (Macintosh; Intel Mac OS X 10_7_5) AppleWebKit/537.22 (KHTML, like Gecko) Chrome/25.0.1364.160 Safari/537.22" />
		</div>
	</form>
	<iframe id="freshwidget-submit-frame" name="freshwidget-submit-frame" src="about:blank" frameborder="0" scrolling="auto" allowTransparency="true" style="visibility:hidden; width:0px; height:0px;"></iframe>
</div>
<div class="content ui-widget-container" id="ui-thanks-container" name="ui-widget-container" style="display:none"></div>

<script type="text/javascript"></script>

